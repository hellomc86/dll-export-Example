
#ifndef SETTINGS_H
#define SETTINGS_H


#if defined(DLLTWOEXPORT)
#ifndef DLLEXPORT
#if defined(EXPORT_DLL)
#define DLLEXPORT __declspec (dllexport)
#else
#define DLLEXPORT __declspec (dllimport)
#endif // EXPORT_DLL
#endif // DLLEXPORT
#ifndef EVTEXPORT
#if defined(EXPORT_MAIN_EVENTS)
#define EVTEXPORT __declspec (dllexport)
#else
#define EVTEXPORT __declspec (dllimport)
#endif // EXPORT_MAIN_EVENTS
#endif // EVTEXPORT
#else
#define DLLEXPORT
#define EVTEXPORT
#endif

#endif