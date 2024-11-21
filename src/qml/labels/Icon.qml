import QtQuick
import QtQuick.Effects
import QtQuick.Controls.Universal as Universal
import UiLib as UiLib

UiLib.IconTemplate {
    id: control
    property Image image: image
    Image {
        id: image
        anchors.fill: parent
        source: control.iconSource
        visible: false
    }
    Rectangle {
        id: rectangle
        anchors.fill: parent
        color: control.color
        visible: false
    }
    MultiEffect {
        source: rectangle
        anchors.fill: rectangle
        maskEnabled: true
        maskSource: image
    }
}
