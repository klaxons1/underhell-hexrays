char *__thiscall sub_102A85F0(char **this)
{
  char *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( (unsigned __int8)sub_1004B510(this, 1, 1) || (result = (char *)sub_1004B510(this, 9, 1), (_BYTE)result) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)this + 5) )
    {
      v3 = (*((int (__thiscall **)(char **))*this + 13))(this);
      v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100000);
      sub_10024230(this[1], v4);
    }
    v5 = (*((int (__thiscall **)(char **))*this + 13))(this);
    v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100001);
    return sub_10024230(this[1], v6);
  }
  return result;
}
