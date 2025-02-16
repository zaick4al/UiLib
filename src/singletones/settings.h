#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QQmlEngine>

#ifndef UiSettings
#define UiSettings UiLib::Settings::instance()
#endif //UiSettings

namespace UiLib {

/**
 * @brief The Common class
 * @details The class that conludes some default values to set. Used in Settings singletone.
 * Has definition for simpler use in C++: UiSettings.
 */
class Common : public QObject
{
    friend class Settings;
    Q_OBJECT
    /**
     * @brief The spacing property
     * Property that defines general spacing between elements
     * @sa spacing(), setSpacing()
     */
    Q_PROPERTY(qreal spacing READ spacing WRITE setSpacing NOTIFY spacingChanged FINAL)
    /**
     * @brief The height property
     * Property that defines general height of elements
     * @sa height(), setHeight()
     */
    Q_PROPERTY(qreal height READ height WRITE setHeight NOTIFY heightChanged FINAL)
    /**
     * @brief The width property
     * Property that defines general width of elements
     * @sa width(), setWidth()
     */
    Q_PROPERTY(qreal width READ width WRITE setWidth NOTIFY widthChanged FINAL)
    /**
     * @brief The radius property
     * Property that defines general radius of elements
     * @sa radius(), setRadius()
     */
    Q_PROPERTY(qreal radius READ radius WRITE setRadius NOTIFY radiusChanged FINAL)
public:
    /**
     * @brief spacing
     * @details Getter-method for current spacing value
     * @return const qreal current value of spacing
     */
    qreal spacing() const;

    /**
     * @brief setSpacing
     * @details Setter-method to change spacing
     * @warning It is not recommended to change spacing values from C++ due to Qml's easier property binding
     * @param qreal p_spacing
     */
    void setSpacing(qreal p_spacing);

    /**
     * @brief height
     * @details Getter-method for current height value
     * @return const qreal current value of height
     */
    qreal height() const;

    /**
     * @brief setHeight
     * @details Setter-method to change height
     * @warning It is not recommended to change height values from C++ due to Qml's easier property binding
     * @param qreal p_height
     */
    void setHeight(qreal p_height);

    /**
     * @brief width
     * @details Getter-method for current width value
     * @return const qreal current value of width
     */
    qreal width() const;
    /**
     * @brief setWidth
     * @details Setter-method to change width
     * @warning It is not recommended to change width values from C++ due to Qml's easier property binding
     * @param qreal p_width
     */
    void setWidth(qreal p_width);

    /**
     * @brief radius
     * @details Getter-method for current radius value
     * @return const qreal current value of radius
     */
    qreal radius() const;

    /**
     * @brief setRadius
     * @details Setter-method to change radius
     * @warning It is not recommended to change radius values from C++ due to Qml's easier property binding
     * @param qreal p_radius
     */
    void setRadius(qreal p_radius);

signals:
    /**
     * @private
     */
    void spacingChanged();

    /**
     * @private
     */
    void heightChanged();

    /**
     * @private
     */
    void widthChanged();

    /**
     * @private
     */
    void radiusChanged();

protected:
    /**
     * @private
     */
    explicit Common(QObject *parent = nullptr);

private:
    /**
     * @private
     */
    qreal m_spacing;

    /**
     * @private
     */
    qreal m_height;

    /**
     * @private
     */
    qreal m_width;

    /**
     * @private
     */
    qreal m_radius;
};

class ButtonProp  : public QObject
{
    friend class Settings;
    Q_OBJECT
    /**
     * @brief The height property
     * Property that defines general height of buttons
     * @sa height(), setHeight()
     */
    Q_PROPERTY(qreal height READ height WRITE setHeight NOTIFY heightChanged FINAL)
    /**
     * @brief The width property
     * Property that defines general width of buttons
     * @sa width(), setWidth()
     */
    Q_PROPERTY(qreal width READ width WRITE setWidth NOTIFY widthChanged FINAL)
    /**
     * @brief The radius property
     * Property that defines general radius of buttons
     * @sa radius(), setRadius()
     */
    Q_PROPERTY(qreal radius READ radius WRITE setRadius NOTIFY radiusChanged FINAL)
public:
    /**
     * @brief height
     * @details Getter-method for current height value
     * @return const qreal current value of height
     */
    qreal height() const;
    /**
     * @brief setHeight
     * @details Setter-method to change height
     * @warning It is not recommended to change height values from C++ due to Qml's easier property binding
     * @param qreal p_height
     */
    void setHeight(qreal p_height);
    /**
     * @brief width
     * @details Getter-method for current width value
     * @return const qreal current value of width
     */
    qreal width() const;
    /**
     * @brief setWidth
     * @details Setter-method to change width
     * @warning It is not recommended to change width values from C++ due to Qml's easier property binding
     * @param qreal p_width
     */
    void setWidth(qreal p_width);
    /**
     * @brief radius
     * @details Getter-method for current radius value
     * @return const qreal current value of radius
     */
    qreal radius() const;
    /**
     * @brief setRadius
     * @details Setter-method to change radius
     * @warning It is not recommended to change radius values from C++ due to Qml's easier property binding
     * @param qreal p_radius
     */
    void setRadius(qreal p_radius);

signals:
    /**
     * @private
     */
    void heightChanged();
    /**
     * @private
     */
    void widthChanged();
    /**
     * @private
     */
    void radiusChanged();

protected:
    /**
     * @private
     */
    explicit ButtonProp(QObject *parent = nullptr);
private:
    /**
     * @private
     */
    qreal m_height;
    /**
     * @private
     */
    qreal m_width;
    /**
     * @private
     */
    qreal m_radius;
};

/**
 * @brief The Settings class
 * @details QML/C++ singleton with common properties for unifying qml values.
 * Has definition for simpler use in C++: UiSettings.
 */
class Settings : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    QML_SINGLETON
    /**
     * @brief The common property
     * @details Property that contains the Common object with some values to set, bind, change and use hovewer you like
     * @sa common(), setCommon()
     */
    Q_PROPERTY(Common *common READ common WRITE setCommon NOTIFY commonChanged FINAL)

    Q_PROPERTY(ButtonProp *buttonProp READ buttonProp WRITE setButtonProp NOTIFY buttonPropChanged FINAL)
public:
    /**
     * @brief create
     * @param QQmlEngine *p_qmlEngine
     * @param QJSEngine *p_jsEngine
     * @return Settings *
     */
    static Settings *create(QQmlEngine *p_qmlEngine, QJSEngine *p_jsEngine);
    /**
     * @brief instance
     * @details Access provider to global singletone instance.
     * @warning You can use simpler version. Just write UiSettings instead of UiLib::Settings::instance().
     * @return &Settings
     */
    static Settings &instance();
    /**
     * @brief common
     * @details Getter method of contained Common object pointer
     * @return Common *value const
     */
    Common *common() const;
    /**
     * @brief setCommon
     * @warning Don't use this method unless you know what you're doing and want multiple switchable common objects.
     */
    void setCommon(Common *newCommon);
    /**
     * @brief buttonProp
     * @details Getter of obtained ButtonProp class object pointer
     * @return ButtonProp *value const
     */
    ButtonProp *buttonProp() const;
    /**
     * @brief setButtonProp
     * @warning Don't use this method unless you know what you're doing and want multiple switchable common objects.
     */
    void setButtonProp(ButtonProp *p_buttonProp);

signals:
    /**
     * @private
     */
    void commonChanged();
    /**
     * @private
     */
    void buttonPropChanged();
protected:
    /**
     * @private
     */
    explicit Settings(QObject *parent = nullptr);

private:
    /**
     * @private
     */
    Common *m_common = nullptr;
    ButtonProp *m_buttonProp = nullptr;
};

} // namespace UiLib

#endif // SETTINGS_H
