int __thiscall sub_10383210(float *this, int a2, float a3)
{
  int (__thiscall *v5)(float *); // eax
  int v6; // eax
  int v7; // eax
  bool v8; // bl
  int v9; // eax
  int v10; // eax
  double v11; // st7
  double v12; // st6
  int v13; // edi
  float *v14; // esi
  double v15; // st7
  _BYTE v16[12]; // [esp+4h] [ebp-14h] BYREF
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
    || *(float *)(dword_106B31C8 + 12) < (double)this[952] )
  {
    return 0;
  }
  v5 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
  v17 = 45.0;
  v18 = 24.0;
  v6 = v5(this);
  v8 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
  {
    v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1088))(v7) )
      v8 = 1;
  }
  v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9)
    && (v10 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 1088))(v10)) )
  {
    v11 = 0.0;
    v12 = 200.0;
  }
  else
  {
    v11 = v18;
    v12 = v17;
  }
  if ( a3 > v12 )
    return 39;
  if ( a3 >= v11 )
  {
    if ( v8 )
      return 23;
    v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v14 = (float *)(sub_10019640(this) + 2);
    v15 = *v14 - *(float *)((*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v13 + 504))(v13, v16) + 8);
    if ( v15 <= 12.0 && v15 >= -24.0 )
      return 23;
  }
  return 38;
}
