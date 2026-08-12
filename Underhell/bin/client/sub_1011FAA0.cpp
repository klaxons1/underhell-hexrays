int __thiscall sub_1011FAA0(float *this)
{
  int *v1; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // edi
  void (__thiscall *v6)(int, int); // eax
  int v7; // eax
  int v8; // edi
  _DWORD v10[2]; // [esp+40h] [ebp-Ch] BYREF
  int v11; // [esp+48h] [ebp-4h] BYREF

  v1 = (int *)off_103E524C[4];
  v3 = *v1;
  v4 = *((_DWORD *)this + 33);
  *v1 = -2;
  v11 = v3;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 184))(dword_10413168);
  BYTE2(v10[0]) = (v4 & 0x2000) != 0;
  sub_1014A8C0(SBYTE2(v10[0]), -1, 1, 0, 0);
  sub_10149440(this);
  if ( (v4 & 0x2000) != 0 )
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 20))(this, v11);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 188))(dword_10413168);
  *(_DWORD *)off_103E524C[4] = v11;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v11 = v5;
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 292))(
    v5,
    *((unsigned __int8 *)this + 176),
    *((unsigned __int8 *)this + 180),
    *((unsigned __int8 *)this + 184),
    *((unsigned __int8 *)this + 188));
  if ( *((_BYTE *)this + 171) )
  {
    v6 = *(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 172);
    if ( *((_BYTE *)this + 172) )
    {
      v6(v5, 1);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 200))(
        v5,
        *((unsigned __int8 *)this + 192),
        *((unsigned __int8 *)this + 196),
        *((unsigned __int8 *)this + 200));
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v5 + 176))(v5, this[51]);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v5 + 180))(v5, this[52]);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v5 + 664))(v5, this[53]);
    }
    else
    {
      v6(v5, 0);
    }
  }
  else if ( *((_BYTE *)this + 224) )
  {
    *((_DWORD *)this + 34) |= 1u;
    sub_10142650(this + 54, 0);
    sub_1011E7B0(&v11, dword_1047C96C);
    v5 = v11;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v11 + 208))(v11, v10);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v5 + 292))(
      v5,
      v10[0],
      *(_DWORD *)((char *)v10 + 1),
      *(_DWORD *)((char *)v10 + 2),
      255);
  }
  else
  {
    sub_10149570(this);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v7 = sub_10142330();
  sub_1011F860(this, 0.0, v7, 0.0);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v8 )
    (**(void (__thiscall ***)(int))v8)(v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v8 + 292))(v8, 0, 0, 0, 255);
  sub_10144D10(*((_DWORD *)this + 32));
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
}
