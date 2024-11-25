cmake_minimum_required(VERSION 3.15)

project(UiLib
  VERSION 0.1
  LANGUAGES CXX
)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_add_library(UiLib STATIC)

qt_add_qml_module(UiLib
  URI "UiLib"
  VERSION 1.0
  QML_FILES
    src/qml/controls/ToggleSwitch.qml
    src/qml/labels/Icon.qml
  SOURCES
      src/singletones/icons.h src/singletones/icons.cpp
      src/singletones/colors.h src/singletones/colors.cpp
      src/singletones/utils.h src/singletones/utils.cpp
      src/singletones/settings.h src/singletones/settings.cpp
      src/templates/control.h src./templates/control.cpp
      src/templates/controls/toggleswitch.h src/templates/controls/toggleswitch.cpp
      src/templates/labels/icon.h src/templates/labels/icon.cpp
  RESOURCES
      resources/icons/accept.svg
      resources/icons/axe.svg
      resources/icons/branch.svg
      resources/icons/book.svg
      resources/icons/book_opened.svg
      resources/icons/bow.svg
      resources/icons/campfire.svg
      resources/icons/character.svg
      resources/icons/close.svg
      resources/icons/check.svg
      resources/icons/connect.svg
      resources/icons/connect_client.svg
      resources/icons/crossbow.svg
      resources/icons/d4.svg
      resources/icons/d6.svg
      resources/icons/d8.svg
      resources/icons/d10.svg
      resources/icons/d12.svg
      resources/icons/d20.svg
      resources/icons/dagger.svg
      resources/icons/dice.svg
      resources/icons/disconnect.svg
      resources/icons/disconnect_client.svg
      resources/icons/droplet.svg
      resources/icons/error.svg
      resources/icons/fire.svg
      resources/icons/grid.svg
      resources/icons/hourglass.svg
      resources/icons/key.svg
      resources/icons/lute.svg
      resources/icons/moon.svg
      resources/icons/musket.svg
      resources/icons/pentagram.svg
      resources/icons/refresh.svg
      resources/icons/refresh_button.svg
      resources/icons/save_accepted.svg
      resources/icons/save_sent.svg
      resources/icons/settings.svg
      resources/icons/server.svg
      resources/icons/shield.svg
      resources/icons/star.svg
      resources/icons/spellbook.svg
      resources/icons/sun.svg
      resources/icons/sword.svg
      resources/icons/warning.svg
      resources/rsc/b_center.svg
      resources/rsc/b_left_part.svg
      resources/rsc/b_right_part.svg
      resources/rsc/btn_chrts.svg
      resources/rsc/button_bg.svg
      resources/rsc/button_border.svg
      resources/rsc/button_box.svg
      resources/rsc/charSheetBg.svg
      resources/rsc/chrts_center.svg
      resources/rsc/chrts_left_chevron.svg
      resources/rsc/chrts_right_chevron.svg
      resources/rsc/down_chevron.svg
      resources/rsc/external_features_textbg.svg
      resources/rsc/initiative_btn.svg
      resources/rsc/inv_border.svg
      resources/rsc/main_background.svg
      resources/rsc/main_bg.svg
      resources/rsc/rpgalignment.svg
      resources/rsc/textFieldBg.svg
  RESOURCE_PREFIX
    /
)

target_include_directories(UiLib PUBLIC
       resources/
       resources/icons/
       resources/resources/
       src/templates/
       src/qml/labels
       src/qml/controls
       src/
   )

target_include_directories(UiLib PRIVATE
    src/singletones
    src/templates/labels
    src/templates/controls
)

target_link_libraries(UiLib PRIVATE
    Qt6::Core
    Qt6::Quick
)
