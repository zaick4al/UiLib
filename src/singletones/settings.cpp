#include "settings.h"

namespace UiLib {

Common::Common(QObject *parent) : m_spacing(0),
    m_standartHeight(0),
    m_standartWidth(0),
    m_standartRadius(0)
{}

qreal Common::spacing() const
{
    return m_spacing;
}

void Common::setSpacing(qreal newSpacing)
{
    if (qFuzzyCompare(m_spacing, newSpacing))
        return;
    m_spacing = newSpacing;
    emit spacingChanged();
}

qreal Common::standartHeight() const
{
    return m_standartHeight;
}

void Common::setStandartHeight(qreal newStandartHeight)
{
    if (qFuzzyCompare(m_standartHeight, newStandartHeight))
        return;
    m_standartHeight = newStandartHeight;
    emit standartHeightChanged();
}

qreal Common::standartWidth() const
{
    return m_standartWidth;
}

void Common::setStandartWidth(qreal newStandartWidth)
{
    if (qFuzzyCompare(m_standartWidth, newStandartWidth))
        return;
    m_standartWidth = newStandartWidth;
    emit standartWidthChanged();
}

qreal Common::standartRadius() const
{
    return m_standartRadius;
}

void Common::setStandartRadius(qreal newStandartRadius)
{
    if (qFuzzyCompare(m_standartRadius, newStandartRadius))
        return;
    m_standartRadius = newStandartRadius;
    emit standartRadiusChanged();
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

void Settings::setCommon(Common *newCommon)
{
    if (m_common == newCommon)
        return;
    m_common = newCommon;
    emit commonChanged();
}

} // namespace UiLib
