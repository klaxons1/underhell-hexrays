int sub_104547E0()
{
  _DWORD *v0; // eax

  v0 = sub_10264CF0();
  return (*(int (__thiscall **)(_DWORD *, int (__stdcall ***)(int), const char *))*v0)(
           v0,
           &off_10614CE4,
           "event_queue_saveload_proxy");
}
