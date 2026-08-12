int __thiscall sub_10033D70(_DWORD *this, int a2)
{
  float *v3; // edi
  float *v4; // eax
  int (__thiscall *v5)(_DWORD *); // edx
  int v6; // eax
  float *v7; // eax
  int result; // eax
  char v9[44]; // [esp+Ch] [ebp-78h] BYREF
  float v10; // [esp+38h] [ebp-4Ch]
  _BYTE v11[12]; // [esp+60h] [ebp-24h] BYREF
  _BYTE v12[12]; // [esp+6Ch] [ebp-18h] BYREF
  float v13[3]; // [esp+78h] [ebp-Ch] BYREF

  if ( !a2 )
    return 66;
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    return 66;
  if ( (unsigned int)(*(__int16 *)(a2 + 816) - 100) > 1 )
    return 66;
  if ( sub_100BDCE0(69) == -1 )
    return 66;
  v3 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*this + 1796))(this, v12, 69);
  v4 = (float *)sub_10019640(this);
  v13[0] = *v3 + *v4;
  v13[1] = v3[1] + v4[1];
  v5 = *(int (__thiscall **)(_DWORD *))(*this + 368);
  v13[2] = v3[2] + v4[2];
  v6 = v5(this);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6);
  sub_10030570((int)this, v13, v7, (int)v11, (int)this, v9);
  result = 69;
  if ( 1.0 == v10 )
    return 66;
  return result;
}
