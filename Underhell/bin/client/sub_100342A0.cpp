char __thiscall sub_100342A0(void *this)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD v6[1024]; // [esp+8h] [ebp-1000h] BYREF

  v1 = (*(int (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 240))(this, v6, 1024);
  v2 = 0;
  if ( v1 <= 0 )
    return 0;
  while ( 1 )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[v2] + 152))(v6[v2]);
    v4 = *(unsigned __int16 *)((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, v3)
                             + 72);
    if ( v4 == 65 || v4 == 70 || v4 == 66 || v4 == 72 )
      break;
    if ( ++v2 >= v1 )
      return 0;
  }
  return 1;
}
