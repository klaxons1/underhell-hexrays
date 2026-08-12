char __thiscall sub_100206F0(float *this, int a2, int a3, float *a4)
{
  double v5; // st7
  char result; // al
  int v7; // [esp-8h] [ebp-24h]
  float v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+18h] [ebp-4h]
  char v10; // [esp+2Fh] [ebp+13h]

  if ( !a4 || (LOBYTE(v9) = 0, a4 == this) )
    LOBYTE(v9) = 1;
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this) )
    return 1;
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this);
  if ( (unsigned __int8)sub_10077840(a2) )
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1636))(this);
  if ( !a4 || a4 == this )
    v5 = ((double (__thiscall *)(float *, int))*(_DWORD *)(*(_DWORD *)this + 1880))(this, a2);
  else
    v5 = 0.0;
  v8 = v5;
  v7 = *(_DWORD *)(*((_DWORD *)this + 647) + 32);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this);
  result = sub_10077EC0(v7, a2, a3, v8, v9);
  v10 = result;
  if ( (_BYTE)v9 )
  {
    if ( a2 && *((_DWORD *)this + 699) )
    {
      sub_100B1920(this, a2, a3);
      return v10;
    }
  }
  else if ( a2 && result && *((_DWORD *)this + 581) == 1 )
  {
    this[587] = 0.0;
    this[585] = 0.0;
  }
  return result;
}
