#include "settings.h"

namespace UiLib {

Common::Common(QObject *parent) : m_spacing(0),
    m_height(0),
    m_width(0),
    m_radius(0)
{}

qreal Common::spacing() const
{
    return m_spacing;
}

void Common::setSpacing(qreal p_spacing)
{
    if (qFuzzyCompare(m_spacing, p_spacing))
        return;
    m_spacing = p_spacing;
    emit spacingChanged();
}

qreal Common::height() const
{
    return m_height;
}

void Common::setHeight(qreal p_height)
{
    if (qFuzzyCompare(m_height, p_height))
        return;
    m_height = p_height;
    emit heightChanged();
}

qreal Common::width() const
{
    return m_width;
}

void Common::setWidth(qreal p_width)
{
    if (qFuzzyCompare(m_width, p_width))
        return;
    m_width = p_width;
    emit widthChanged();
}

qreal Common::radius() const
{
    return m_radius;
}

void Common::setRadius(qreal p_radius)
{
    if (qFuzzyCompare(m_radius, p_radius))
        return;
    m_radius = p_radius;
    emit radiusChanged();
}

Settings::Settings(QObject *parent)
    : QObject{parent},
      m_common(new Common(this))
{}

Settings &Settings::instance()
{
    static Settings settings;
    return settings;
}

Common *Settings::common() const
{
    return m_common;
}

void Settings::setCommon(Common *p_common)
{
    if (m_common == p_common)
        return;
    m_common = p_common;
    emit commonChanged();
}

} // namespace UiLib
