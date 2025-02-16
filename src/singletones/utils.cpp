#include "utils.h"
#include <QQmlEngine>

namespace UiLib {

Utils::Utils()
{
    QQmlEngine::setObjectOwnership(this, QQmlEngine::CppOwnership);
}

Utils *Utils::create(QQmlEngine *p_qmlEngine, QJSEngine *p_jsEngine)
{
    return &UiUtils;
}

Utils &Utils::instance()
{
    static Utils utils;
    return utils;
}

QColor Utils::blendColors(QColor p_firstColor, QColor p_secondColor, int p_mixStrength)
{
    auto mixture = (float)p_mixStrength / 100;
    auto red = p_firstColor.redF() * (1 - mixture) + p_secondColor.redF() * mixture;
    auto green = p_firstColor.greenF() * (1 - mixture) + p_secondColor.greenF() * mixture;
    auto blue = p_firstColor.blueF() * (1 - mixture) + p_secondColor.blueF() * mixture;
    QColor mixedColor;
    mixedColor.setRgb(red * 255, green * 255, blue * 255);
    return mixedColor;
}

} // namespace UiLib
