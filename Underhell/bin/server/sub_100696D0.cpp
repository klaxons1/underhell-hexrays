int __thiscall sub_100696D0(void *this, int a2)
{
  int v3; // edi
  int result; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1248))(this, a2);
  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1300))(this, v3);
  if ( !result )
  {
    DevMsg("GetScheduleOfType(): No CASE for Schedule Type %d!\n", v3);
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1300))(this, 1);
  }
  return result;
}
