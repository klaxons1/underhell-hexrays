char __thiscall sub_102FEFB0(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  float *v8; // eax
  int v9; // ecx
  int v11; // [esp+8h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-20h]
  int v13; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  float v15; // [esp+20h] [ebp-Ch] BYREF
  float v16; // [esp+24h] [ebp-8h]
  float v17; // [esp+28h] [ebp-4h]

  if ( *(_DWORD *)(dword_10698344 + 48)
    && (this[62] & 0x40000) != 0
    && (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v5 = *this;
    v11 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 576))(v4, 1.0, 0.2, 0.0);
    v6 = (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*this + 368))(this, v11, v12, v13, v14);
LABEL_14:
    (*(void (__thiscall **)(_DWORD *, int))(v5 + 1704))(this, v6);
    return sub_101782E0(a2, a3);
  }
  if ( sub_100697A0(this, 97, 1) )
  {
    v7 = sub_1001FCB0(this, 256);
    if ( v7 )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD))(*this + 1708))(this, v7 + 36, 1.0, 0.5, 0.0);
  }
  else if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) && sub_1007DE30((_DWORD *)this[647]) == 11 )
  {
    v8 = (float *)sub_100217F0(this);
    v15 = *v8;
    v9 = this[63];
    v16 = v8[1];
    v17 = v8[2];
    if ( (v9 & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( fabs(v16 - *((float *)this + 146)) + fabs(v15 - *((float *)this + 145)) + fabs(v17 - *((float *)this + 147)) < 512.0 )
    {
      v5 = *this;
      v6 = (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD, _DWORD))(*this + 368))(this, &v15, 1.0, 0.2, 0.0);
      goto LABEL_14;
    }
  }
  return sub_101782E0(a2, a3);
}
