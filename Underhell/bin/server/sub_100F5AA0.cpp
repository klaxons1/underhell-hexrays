float *__thiscall sub_100F5AA0(int this, float *a2, int a3, int a4, int a5)
{
  float *result; // eax
  float *v7; // eax
  int v8; // edx
  int v9; // eax
  float v10[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 1092))(this) )
  {
    sub_100F59C0((_DWORD *)this);
    sub_104222B0(this + 4368, a3, a4, a5);
    result = a2;
    if ( a2 )
    {
      *a2 = *(float *)(this + 4356);
      a2[1] = *(float *)(this + 4360);
      a2[2] = *(float *)(this + 4364);
    }
  }
  else
  {
    v7 = sub_100E8850(this, v10);
    *a2 = *v7;
    v8 = *(_DWORD *)this;
    a2[1] = v7[1];
    a2[2] = v7[2];
    v9 = (*(int (__thiscall **)(int))(v8 + 508))(this);
    return (float *)sub_104222B0(v9, a3, a4, a5);
  }
  return result;
}
