char __thiscall sub_101246B0(unsigned __int16 *this, int a2)
{
  int *v3; // edi
  int *v4; // ebx
  const char *v5; // eax
  int v6; // eax
  char result; // al
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  _BYTE *v18; // eax
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  float v23[3]; // [esp+Ch] [ebp-10h] BYREF
  int v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+24h] [ebp+8h]

  v3 = (int *)(this + 4);
  v4 = (int *)(this + 2);
  *this = -1;
  *((_DWORD *)this + 3) = 1;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 1) = 1;
  v5 = (const char *)sub_10228270(a2);
  if ( v5 && !_stricmp(v5, "avi") )
  {
    v6 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)dword_104131C0 + 40))(
           dword_104131C0,
           a2,
           a2,
           "GAME");
    *this = v6;
    if ( (_WORD)v6 == 0xFFFF )
      return 0;
    *((_DWORD *)this + 4) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131C0 + 52))(dword_104131C0, v6);
    (*(void (__stdcall **)(_DWORD, unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)dword_104131C0 + 60))(
      *this,
      this + 2,
      this + 4);
    v8 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_104131C0 + 68))(*this);
  }
  else
  {
    v9 = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           a2,
           "ClientEffect textures",
           1,
           0);
    *((_DWORD *)this + 4) = v9;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 16))(v9);
    v11 = *((_DWORD *)this + 4);
    *v4 = v10;
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 20))(v11);
    v13 = *((_DWORD *)this + 4);
    *v3 = v12;
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 24))(v13);
  }
  v14 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 3) = v8;
  if ( !v14 )
    return 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 48))(v14);
  v15 = (*(int (__thiscall **)(_DWORD, const char *, void *))(**((_DWORD **)this + 4) + 188))(
          *((_DWORD *)this + 4),
          "$spriteorientation",
          &unk_10437E74);
  if ( v15 )
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  else
    v16 = 0;
  v17 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v16;
  v18 = (_BYTE *)(*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v17 + 188))(
                   v17,
                   "$spriteorigin",
                   &unk_10437E70);
  if ( v18 && (v18[28] & 0xF) == 2 )
  {
    (*(void (__thiscall **)(_BYTE *, float *, int))(*(_DWORD *)v18 + 112))(v18, v23, 3);
    v25 = *v4;
    v24 = -v25;
    v19 = (double)-v25 * v23[0];
    v20 = (double)*v3;
    v21 = v23[1] * v20;
  }
  else
  {
    v25 = *v4;
    v24 = -v25;
    v19 = (double)-v25 * 0.5;
    v22 = (double)*v3;
    v21 = 0.5 * v22;
    v20 = v22;
  }
  *((float *)this + 9) = v21;
  result = 1;
  *((float *)this + 10) = v21 - v20;
  *((float *)this + 11) = v19;
  *((float *)this + 12) = v19 + (double)v25;
  return result;
}
