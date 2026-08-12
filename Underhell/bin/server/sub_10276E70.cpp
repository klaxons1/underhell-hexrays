int __thiscall sub_10276E70(int this)
{
  int result; // eax
  int v3; // edi

  result = sub_100D1940((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1444))(
               this,
               v3,
               0.5,
               1.0,
               *(float *)(this + 1232),
               2.0);
  }
  return result;
}
