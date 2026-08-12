int __thiscall sub_10027BD0(int this)
{
  char *v2; // eax
  int result; // eax
  const char *v4; // [esp+4h] [ebp-4h]

  v2 = *(char **)(this + 1700);
  if ( !v2 )
    v2 = (char *)String;
  sub_10020B90((int *)this, v2, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1172))(this);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1168))(this);
  if ( *(_DWORD *)(this + 2352) == 4 )
  {
    *(_DWORD *)(this + 2356) |= 1u;
    *(_DWORD *)(this + 2352) = 0;
  }
  if ( *(_DWORD *)(this + 2352) == 5 )
  {
    *(_DWORD *)(this + 2356) |= 2u;
    *(_DWORD *)(this + 2352) = 0;
  }
  if ( *(int *)(this + 2352) <= 0 )
  {
    *(float *)(this + 2168) = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    sub_100EAB80(this, 32);
    if ( *(_DWORD *)(this + 2324) == 4 )
      Warning("%s put to sleep while in Scripted state!\n", v4);
    sub_1004AF00(this);
    sub_100457E0(87);
    sub_1010DD80(this, this, 0.0);
    result = dword_106B31C8;
    *(float *)(this + 2168) = *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
