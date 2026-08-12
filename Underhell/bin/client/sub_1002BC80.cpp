float *__thiscall sub_1002BC80(int this, float *a2, float a3, float *a4, int a5)
{
  float *result; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  float *v10; // esi
  double v11; // st7
  int v12; // ecx
  double v13; // st7
  float v14; // [esp+0h] [ebp-18h]
  int v15; // [esp+20h] [ebp+8h]
  float *v16; // [esp+28h] [ebp+10h]

  result = a4;
  if ( a4 == (float *)a5 )
  {
    v7 = 0;
    if ( *(_BYTE *)(this + 29) )
    {
      result = a2;
      v8 = *(_DWORD *)(a5 + 8) - (_DWORD)a2;
      do
      {
        ++v7;
        *result = *(float *)((char *)result + v8);
        ++result;
      }
      while ( v7 < *(unsigned __int8 *)(this + 29) );
    }
  }
  else
  {
    v9 = 0;
    if ( *(_BYTE *)(this + 29) )
    {
      v10 = (float *)*((_DWORD *)a4 + 2);
      v11 = a3;
      result = (float *)(*(_DWORD *)(a5 + 8) - (_DWORD)v10);
      v12 = (char *)a2 - (char *)v10;
      v16 = result;
      v15 = (char *)a2 - (char *)v10;
      do
      {
        if ( *(_BYTE *)(v9 + *(_DWORD *)(this + 32)) )
        {
          v14 = v11;
          v13 = sub_1002BBD0(v14, *v10, *(float *)((char *)v10 + (_DWORD)result));
          v12 = v15;
          *(float *)((char *)v10 + v15) = v13;
          v11 = a3;
          result = v16;
        }
        else
        {
          *(float *)((char *)v10 + v12) = (*(float *)((char *)v10 + (_DWORD)result) - *v10) * v11 + *v10;
        }
        ++v9;
        ++v10;
      }
      while ( v9 < *(unsigned __int8 *)(this + 29) );
    }
  }
  return result;
}
