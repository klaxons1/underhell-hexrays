char __thiscall sub_10359530(void *this, int a2, float *a3, void *a4)
{
  int v5; // eax
  double v6; // st7
  int v7; // eax
  char v8; // al
  char result; // al
  int v10; // [esp-8h] [ebp-24h]
  float v11; // [esp+4h] [ebp-18h]
  char v12; // [esp+18h] [ebp-4h]
  char v13; // [esp+2Fh] [ebp+13h]

  if ( !a4 || (v12 = 0, a4 == this) )
    v12 = 1;
  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 1868))(this) )
    return 1;
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1868))(this);
  if ( sub_10077840(v5, a2) )
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1636))(this);
  if ( !a4 || a4 == this )
    v6 = ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 1880))(this, a2);
  else
    v6 = 0.0;
  v11 = v6;
  v10 = *(_DWORD *)(*((_DWORD *)this + 647) + 32);
  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1868))(this);
  v8 = sub_10077EC0(v7, v10, a2, a3, v11, v12);
  v13 = v8;
  if ( v12 )
  {
    if ( a2
      && *((_DWORD *)this + 699)
      && (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
       || *(float *)(dword_106B31C8 + 12) - *((float *)this + 677) >= 5.0) )
    {
      sub_100B1920(*((unsigned int **)this + 699), (int)this, a2, (int)a3);
    }
  }
  else
  {
    if ( a2 && v8 && *((_DWORD *)this + 581) == 1 )
    {
      *((_DWORD *)this + 585) = 0;
      *((float *)this + 587) = 0.0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      result = v13;
      *((float *)this + 677) = 1.0;
      return result;
    }
  }
  return v13;
}
