#ifndef OASTIKYNOTE_GLOBAL_H
#define OASTIKYNOTE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OASTIKYNOTE_LIBRARY)
#  define OASTIKYNOTESHARED_EXPORT Q_DECL_EXPORT
#else
#  define OASTIKYNOTESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // OASTIKYNOTE_GLOBAL_H
