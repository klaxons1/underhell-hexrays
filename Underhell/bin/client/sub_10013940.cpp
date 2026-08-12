float *__thiscall sub_10013940(float *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  float *result; // eax
  float *v7; // eax

  v3 = *((_DWORD *)this + 1032);
  if ( v3 != -1
    && (v4 = (int *)((char *)off_103DCD74 + 16 * ((_DWORD)this[1032] & 0xFFF) + 4), v4[1] == v3 >> 12)
    && (v5 = *v4) != 0
    && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 332))(v5) )
  {
    sub_100131D0(this);
    result = a2;
    *a2 = this[1080];
    a2[1] = this[1081];
    a2[2] = this[1082];
  }
  else if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 844))(this)
         && *((_DWORD *)this + 1021) == 5
         && (unsigned __int8)sub_10042350(this) )
  {
    v7 = (float *)sub_101356D0();
    *a2 = *v7;
    a2[1] = v7[1];
    a2[2] = v7[2];
    return a2;
  }
  else
  {
    sub_1000E860(this, a2);
    return a2;
  }
  return result;
}
