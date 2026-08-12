int __thiscall sub_1016F9D0(int this)
{
  bool v2; // cc
  int result; // eax
  int v4; // edi

  v2 = *(_DWORD *)(this + 396) <= 0;
  *(_DWORD *)(this + 52) = *(_DWORD *)(this + 24) + (int)(8.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
  if ( v2 )
  {
    sub_1016F900((_DWORD *)this, -1);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 44))(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 48))(this);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
  }
  else
  {
    result = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31F8 + 24))(
               dword_106B31F8,
               "hltv_cameraman",
               1);
    v4 = result;
    if ( result )
    {
      (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)result + 40))(
        result,
        "index",
        *(_DWORD *)(this + 396));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 16) + 40))(*(_DWORD *)(this + 16), v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 40))(dword_106B31F8, v4);
      *(_DWORD *)(this + 28) = *(_DWORD *)(this + 396);
      result = *(_DWORD *)(this + 24) + (int)(4.0 / *(float *)(dword_106B31C8 + 28) + 0.5);
      *(_DWORD *)(this + 52) = result;
    }
  }
  return result;
}
