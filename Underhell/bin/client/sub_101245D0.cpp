float *__thiscall sub_101245D0(_DWORD *this, float *a2, float *a3, float *a4, float *a5)
{
  double v5; // st7
  int v8; // eax
  double v9; // st6
  float *result; // eax
  int v11; // [esp+1Ch] [ebp+10h]
  int v12; // [esp+1Ch] [ebp+10h]

  v5 = 1.0;
  *a4 = 1.0;
  *a5 = 1.0;
  v8 = *(unsigned __int16 *)this;
  if ( (_WORD)v8 != 0xFFFF )
  {
    (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)dword_104131C0 + 56))(dword_104131C0, v8, a4, a5);
    v5 = 1.0;
  }
  v11 = this[1];
  if ( v11 )
    v9 = v5 / (double)v11;
  else
    v9 = v5;
  v12 = this[2];
  if ( v12 )
    v5 = v5 / (double)v12;
  result = a2;
  *a2 = v9 * 0.5;
  *a3 = v5 * 0.5;
  *a4 = *a4 - *a2;
  *a5 = *a5 - *a3;
  return result;
}
