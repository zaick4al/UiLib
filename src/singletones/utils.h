#ifndef UTILS_H
#define UTILS_H

#include <QQuickItem>

#ifndef UiUtils
#define UiUtils UiLib::Utils::instance()
#endif //UiUtils

namespace UiLib {

/**
 * @brief The Utils class
 * @details The singletone class with some methods to extend Qml's abilities.
 * Has definition for simpler use in C++: UiUtils.
 */
class Utils : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
public:
    /**
     * @brief create
     * @param QQmlEngine *p_qmlEngine
     * @param QJSEngine *p_jsEngine
     * @return Utils *
     */
    static Utils *create(QQmlEngine *p_qmlEngine, QJSEngine *p_jsEngine);
    /**
     * @brief instance
     * @details Access provider to global singletone instance.
     * @warning You can use simpler version. Just write UiUtils instead of UiLib::Utils::instance().
     * @return &Utils
     */
    static Utils &instance();
    /**
     * @brief blendColors
     * @param QColor p_firstColor
     * @param QColor p_secondColor
     * @param int p_mixStrength
     * @return QColor
     * @details Mixes colors with set mixture strength, returns mixed color
     */
    Q_INVOKABLE QColor blendColors(QColor p_firstColor, QColor p_secondColor, int p_mixStrength);

protected:
    /**
     * @private
     */
    Utils();

};

} // namespace UiLib

#endif // UTILS_H
