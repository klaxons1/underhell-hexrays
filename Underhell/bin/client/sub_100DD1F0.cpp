int __thiscall sub_100DD1F0(int this, int a2)
{
  _BYTE *v3; // ebx
  _BYTE *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // eax
  float v12; // [esp+0h] [ebp-20h]
  int v13; // [esp+0h] [ebp-20h]
  _BYTE v14[12]; // [esp+10h] [ebp-10h] BYREF
  float v15; // [esp+1Ch] [ebp-4h]

  v15 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
  if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 16) + 108))(*(_DWORD *)(this + 16)) < v15 )
    v3 = *(_BYTE **)(this + 24);
  else
    v3 = *(_BYTE **)(this + 20);
  v4 = *(_BYTE **)(this + 4);
  v5 = v4[28] & 0xF;
  v15 = 0.0;
  if ( v5 == 2 )
  {
    if ( *(int *)(this + 8) >= 0 )
      v5 = 0;
    v6 = *(_DWORD *)v4;
    goto LABEL_11;
  }
  if ( v5 == 6 )
  {
    v5 = v3[28] & 0xF;
    if ( v5 == 2 )
    {
      v6 = *(_DWORD *)v3;
      v4 = v3;
LABEL_11:
      v15 = COERCE_FLOAT((*(int (__fastcall **)(_BYTE *))(v6 + 120))(v4));
    }
  }
  if ( v5 )
  {
    v7 = v5 - 2;
    if ( v7 )
    {
      if ( v7 == 2 )
      {
        v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 104))(v3);
        v9 = *(_DWORD *)(this + 4);
        v15 = *(float *)&v8;
        v12 = (float)v8;
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 12))(LODWORD(v12));
      }
    }
    else
    {
      (*(void (__thiscall **)(_BYTE *, _BYTE *, float))(*(_DWORD *)v3 + 112))(v3, v14, COERCE_FLOAT(LODWORD(v15)));
      (*(void (__thiscall **)(_DWORD, _BYTE *, float))(**(_DWORD **)(this + 4) + 48))(
        *(_DWORD *)(this + 4),
        v14,
        COERCE_FLOAT(LODWORD(v15)));
    }
  }
  else
  {
    *(float *)&v13 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)v3 + 108))(v3);
    sub_1009E9B0((_DWORD *)this, v13);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v11);
  }
  return result;
}
