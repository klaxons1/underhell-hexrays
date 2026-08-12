float *__thiscall sub_1010D3B0(int this, int a2)
{
  float *result; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-8h]
  int v6; // [esp+0h] [ebp-8h]

  result = (float *)sub_100422D0();
  if ( result )
  {
    v5 = result[59] * result[59] + result[58] * result[58] + result[60] * result[60];
    *(float *)&v6 = off_103EDFE0(v5) * *(float *)(this + 12);
    sub_1009E9B0((_DWORD *)this, v6);
    result = (float *)sub_101BC880();
    if ( (_BYTE)result )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
      return (float *)sub_101BCA60(v4);
    }
  }
  return result;
}
