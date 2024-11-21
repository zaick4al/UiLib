import QtQuick
import QtQuick.Effects
import QtQuick.Controls.Universal as Universal
import UiLib as UiLib

UiLib.ToggleSwitchTemplate {
    id: control

    property real radius: height * 0.5
    property real backgroundHeightDelta: 0.5
    property real knobHeightDelta: 0.85
    property real knobRadius: knob.height * 0.5

    property bool hovered: hoverArea.hovered
    Item {
        id: container
        anchors.fill: parent
        Rectangle {
            id: background

            y: parent.height * 0.5 - height * 0.5
            height: parent.height * control.backgroundHeightDelta
            width: parent.width
            radius: control.radius
            color: control.backgroundColor
            border.color: control.borderColor
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    container.toggle()
                }
            }
        }
        Rectangle {
            anchors {
                top: background.top
                bottom: background.bottom
                left: background.left
                right: knob.horizontalCenter
            }
            color: control.infillColor
            radius: background.radius
            border.color: background.border.color
        }
        Rectangle {
            id: knob
            x: radius < width * 0.5 ? -width * 0.1 : 0
            y: parent.height * 0.5 - height * 0.5
            height: parent.height * control.knobHeightDelta
            width: height
            radius: control.knobRadius
            color: control.handleColor
            border.color: control.borderColor
            Behavior on x {
                PropertyAnimation {
                    easing.type: Easing.OutElastic
                    duration: 400
                }
            }
            MouseArea {
                id: knobArea
                anchors.fill: parent
                drag.target: knob
                drag.axis: Drag.XAxis
                drag.minimumX: knob.height > background.height ? -width * 0.5 : 0
                drag.maximumX: knob.height > background.height ? background.width - width
                                                                 * 0.5 : background.width - width
                property bool wasPressed: false
                onClicked: {
                    container.toggle()
                }
                onPressed: {
                    wasPressed = true
                }
                onReleased: {
                    if (wasPressed)
                        container.releaseSwitch()
                    wasPressed = false
                }
            }
        }
        states: [
            State {
                name: "on"
                PropertyChanges {
                    target: knob
                    x: knob.radius < knob.width
                       * 0.5 ? background.width - knob.width * 0.9 : background.width - knob.width
                }
                PropertyChanges {
                    target: control
                    checked: true
                }
            },
            State {
                name: "off"
                PropertyChanges {
                    target: knob
                    x: knob.radius < knob.width * 0.5 ? -knob.width * 0.1 : 0
                }
                PropertyChanges {
                    target: control
                    checked: false
                }
            }
        ]
        transitions: Transition {
            NumberAnimation {
                properties: "x"
                easing.type: Easing.OutElastic
                duration: 400
            }
        }
        function toggle() {
            if (container.state === "on")
                return container.state = "off"
            container.state = "on"
        }

        function resetKnobPosition() {
            if (container.state === "off")
                knob.x = Qt.binding(() => {
                                        return knob.radius < knob.width
                                        * 0.5 ? -knob.width * 0.1 : 0
                                    })
            else if (container.state === "on")
                knob.x = Qt.binding(() => {
                                        return knob.radius < knob.width
                                        * 0.5 ? background.width - knob.width * 0.9 : 0
                                    })
        }

        function releaseSwitch() {
            if (knob.x <= background.width * 0.5 - knob.width * 0.5) {
                if (container.state === "off")
                    return resetKnobPosition()
            }
            if (knob.x > background.width * 0.5 - knob.width * 0.5) {
                if (container.state === "on")
                    return resetKnobPosition()
            }
            toggle()
        }
    }
    HoverHandler {
        id: hoverArea
        grabPermissions: PointerHandler.ApprovesTakeOverByAnything
    }
    Universal.ToolTip {
        id: toolTipControl
        delay: 500
        visible: control.hovered && control.tooltipEnabled
        contentItem: Text {
            text: toolTipControl.text
            color: UiLib.Colors.lightestColor
        }
        background: Rectangle {
            color: UiLib.Colors.darkColor
            border.color: UiLib.Colors.darkestColor
            radius: Math.trunc(Math.min(height * 0.15, width * 0.15))
        }
        text: control.tooltipText
    }
    Component.onCompleted: {
        container.state = "off"
    }
}
