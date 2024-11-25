# Examples

## Adding library to project

1. Clone library to project directory
```cmd
    git clone https://github.com/zaick4al/UiLib.git UiLib
```

2. Add library to cmake

    2.1. Add subdirectory (usually i do this right behind find_package)

    ```cmake
        add_subdirectory(UiLib)
    ```

    2.2. Link library
    
    ```cmake
        target_link_libraries(appName PRIVATE ... UiLibplugin)
    ```
    
    2.3. Include directories
    
    ```cmake
        target_include_directories(appName PRIVATE UiLib/src/ UiLib/src/templates)
    ```
    
3. Done!

## Using the singletones

At the moment program gives 4 singletones.

First and most important one is Settings.

### The Settings Singleton

For settings it is intended to give them values in Main.qml:

```qml  
    //i do this in Main.qml in signal Component.onCompleted
    
    //don't forget to import library at the top of Main.qml    
    import UiLib
    Window{
        ...
        Component.onCompleted: {
            UiLib.Settings.common.spacing = Qt.binding(function () {
                return mainWindow.height * 0.01
            })
            UiLib.Settings.common.height = Qt.binding(function () {
                return mainWindow.height * 0.05
            })
            UiLib.Settings.common.width = Qt.binding(function () {
                return mainWindow.width * 0.05
            })
            UiLib.Settings.common.radius = Qt.binding(function () {
                return Math.min(mainWindow.height * 0.0277777778,
                                mainWindow.width * 0.015625)
            })
        }
    }
```

And then i use those values as i please, for example:

```qml  
    Rectangle{
        anchors{
            top: someOtherObject.top
            left: someOtherObject.left
            
            topMargin: UiLib.Settings.common.spacing
            leftMargin: anchors.topMargin
        }
        height: UiLib.Settings.common.height
        width: UiLib.Settings.common.width
        radius: UiLib.Settings.common.radius
    }
```

### The Colors Singleton

Colors singleton is singleton with color themes and colors that depend on them.

To use default theme, simple trick would do:

```qml
    Rectangle{
        height: UiLib.Settings.common.height
        width: UiLib.Settings.common.width
        radius: UiLib.Settings.common.radius
        color: UiLib.Colors.darkest 
    }
```

The available colors are black, darkest, dark, neutral, light, lightest, white

You can also, as previously mentioned, change themes.

To do that, you can use the next code:

```qml
    Button{
        height: UiLib.Settings.common.height
        width: UiLib.Settings.common.width
        color: UiLib.Colors.neutral
        onClicked: {
            //Changing the theme
            UiLib.Colors.theme = UiLib.Colors.theme === 1 ? 2 : 1
        }
    }
```

As of now, the library doesn't support custom themes.

### The Icons Singleton

Icons singleton contains icon urls to be used with QtQuick's Image or this library's own Icon object.

For Example:

```qml
    UiLib.Icon {
        height: UiLib.Settings.common.height
        width: UiLib.Settings.common.width
        iconSource: UiLib.Icons.campfire
        color: UiLib.Colors.light
    }
```

### The Utils Singleton

Utils provide some extended functions to use library with. At the moment it contains just one method.

Method blendColors: 

```qml
    Rectangle {
        anchors.fill: parent
        color: UiLib.Utils.blendColors(UiLib.Colors.dark,
                                       UiLib.Colors.black, 50)
        //blend general black and current theme dark colors with 50% mixture strength
    }
```
