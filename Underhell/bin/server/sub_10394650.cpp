bool __thiscall sub_10394650(int *this, float *a2)
{
  int v4; // eax
  int v5; // edi
  float *v6; // eax
  int v7; // ebx
  int v8; // eax
  _BYTE v9[12]; // [esp+4h] [ebp-18h] BYREF
  float v10[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( !(*(int (__thiscall **)(int *))(*this + 368))(this) )
    return 1;
  v4 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) != 20 )
    return 1;
  v5 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  v6 = (float *)(*(int (__thiscall **)(int *))(*this + 532))(this);
  v7 = *this;
  v10[0] = *v6 + *a2;
  v10[1] = v6[1] + a2[1];
  v10[2] = v6[2] + a2[2];
  v8 = (*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v5 + 504))(v5, v9, v10);
  return (*(unsigned __int8 (__thiscall **)(int *, int))(v7 + 1944))(this, v8) != 0;
}
