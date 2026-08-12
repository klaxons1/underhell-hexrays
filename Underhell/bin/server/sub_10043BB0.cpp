char __thiscall sub_10043BB0(_DWORD *this, int a2)
{
  int v3; // eax
  char result; // al
  int v5; // [esp+14h] [ebp-Ch] BYREF
  float v6; // [esp+18h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp-4h]

  sub_10043050(this, 0, 0);
  v3 = sub_100217F0(this);
  v5 = *(int *)v3;
  v6 = *(float *)(v3 + 4);
  v7 = *(float *)(v3 + 8);
  if ( *(float *)&v5 != flt_106F1CA8 || v6 != flt_106F1CAC || v7 != flt_106F1CB0 )
  {
    if ( (a2 == 74 || a2 == 78)
      && ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x20000000) != 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*this + 880))(this, &v5) )
    {
      sub_10078210(*(float *)(this[651] + 20), -2.0);
    }
    else
    {
      sub_10078720((int)&v5, -2.0);
    }
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
  if ( result )
  {
    if ( a2 == 78 && this != (_DWORD *)-2760 )
      sub_100B8C80(0);
    return sub_10027CD0(this, 0);
  }
  return result;
}
