int __thiscall sub_100B37C0(int this, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int result; // eax

  if ( *(_BYTE *)(this + 128) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(this + 132));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *a6);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, a2, a3);
    return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(
             (unsigned __int16)*(char *)(this + 130),
             0);
  }
  else
  {
    result = *(_DWORD *)(this + 136);
    if ( result != -1 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, result);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *a6);
      return (*(int (__thiscall **)(int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C
                                                                                            + 392))(
               dword_1047CA6C,
               a2,
               a3,
               a2 + a4,
               a3 + a5,
               *(float *)(this + 140),
               *(float *)(this + 144),
               *(float *)(this + 148),
               *(float *)(this + 152));
    }
  }
  return result;
}
