#ifndef MOVINGICON_H
#define MOVINGICON_H

#include <QObject>
#include <QTimer>
#include <QList>
#include "header_file/mapicon.h"

class MovingIcon : public MapIcon {
    Q_OBJECT // 确保包含 Q_OBJECT 宏
public:
    MovingIcon(const QString& iconFilePath,  const int normalNum, const int clickNum, int iconsize = 80, int switchInterval = 50, int moveInterval = 50);

    void start();
    void stop();
    void setPath(const QList<QPoint>& path);
    void moveAlongPath();
    QList<QPoint> m_path;
    int m_currentPathIndex;
    int m_switchInterval;
    int m_moveInterval;
    bool m_currentIcon; // 新增变量：用于跟踪当前显示哪个图标
};

#endif // MOVINGICON_H
