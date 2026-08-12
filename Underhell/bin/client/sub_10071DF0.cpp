int __thiscall sub_10071DF0(int this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  float *v6; // eax
  int v7; // ebx
  int v8; // eax
  int (__thiscall ***v10)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD); // [esp+18h] [ebp-4h]

  v10 = (int (__thiscall ***)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))sub_10229A20(this + 1328);
  if ( !v10 || (*(_BYTE *)(this + 1240) & 1) == 0 )
    return 0;
  v3 = sub_100422D0();
  if ( !v3 )
    return 0;
  v4 = this - 4;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 296))(v3);
  if ( !sub_10070FC0((_DWORD *)(this - 4), v5) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 592))(this - 4, v3) )
    return 0;
  v6 = (float *)sub_101422C0();
  if ( sub_10070CF0((char *)(this - 4), v6) )
    return 0;
  sub_10070D70((float *)(this - 4));
  v7 = *(_DWORD *)dword_1047CA64;
  v8 = (**v10)(
         v10,
         this + 1264,
         *(_DWORD *)(this + 1188),
         *(_DWORD *)(this + 1192),
         *(float *)(this + 1196),
         *(float *)(this + 1200));
  (*(void (__thiscall **)(int, int))(v7 + 552))(dword_1047CA64, v8);
  sub_10071AE0(v4, v4);
  return 1;
}
