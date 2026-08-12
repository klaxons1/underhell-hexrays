char __thiscall sub_10317650(_BYTE *this, _BYTE *a2)
{
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // eax
  _DWORD v8[1024]; // [esp+8h] [ebp-1000h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 320))(a2) )
    return 0;
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 340))(a2) )
    return 0;
  if ( a2 == this )
    return 0;
  if ( !a2[361] )
    return 0;
  if ( (a2[356] & 4) != 0 )
    return 0;
  v3 = (*(int (__thiscall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a2 + 624))(a2, v8, 1024);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8[v4] + 152))(v8[v4]);
    v6 = *(unsigned __int16 *)((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v5)
                             + 72);
    if ( v6 == 77 || v6 == 70 || v6 == 86 || v6 == 71 || v6 == 80 || v6 == 66 || v6 == 72 )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return 1;
}
