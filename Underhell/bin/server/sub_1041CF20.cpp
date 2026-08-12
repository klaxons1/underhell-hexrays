int __thiscall sub_1041CF20(int this, float *a2, float a3, float a4, char a5, _DWORD *a6)
{
  double v9; // st7
  double v10; // st7
  int v11; // eax
  bool v12; // al
  bool v13; // c0
  bool v14; // c3
  double v15; // st7
  int result; // eax
  double v17; // st7
  float *v18; // eax
  float *v19; // ebp
  float v20; // [esp+4h] [ebp-20h]
  float v21; // [esp+8h] [ebp-1Ch]
  float v22; // [esp+20h] [ebp-4h]
  int v23; // [esp+28h] [ebp+4h]
  bool v24; // [esp+38h] [ebp+14h]

  *a6 = 0;
  v24 = sub_10418530(a2);
  *(float *)&v23 = sub_10418510(a2);
  if ( v24 )
    v9 = sub_10418520(a2);
  else
    v9 = sub_10418510(a2);
  v22 = v9;
  if ( !a5 )
  {
    v10 = a3;
    a3 = a4;
    a4 = v10;
  }
  v11 = sub_10418360((unsigned __int8 *)a2);
  if ( v11 == 5 )
  {
    if ( !a5
      || (v17 = *(float *)&v23 - *(float *)(this + 148),
          *(float *)&v23 = v17,
          v21 = v17 + *(float *)(this + 148),
          v20 = v17,
          v18 = (float *)sub_1041CEC0((_DWORD *)this, v20, v21),
          (v19 = v18) == 0)
      || sub_10418510(v18) < a3 )
    {
LABEL_9:
      v12 = sub_10418750(a2);
      v13 = a3 < (double)v22;
      v14 = a3 == v22;
      v15 = a3;
      if ( v12 )
      {
        if ( (v13 || v14) && v15 >= *(float *)&v23 )
        {
          result = 1;
          *a6 = 3;
        }
        else
        {
          result = 0;
          *a6 = 4;
        }
      }
      else if ( (v13 || v14) && *(float *)&v23 <= v15 )
      {
        *a6 = sub_10418660(a2) + 1;
        return 1;
      }
      else if ( v24 || sub_1041C840(*(float *)&v23, a3, a4) )
      {
        return 0;
      }
      else
      {
        result = 1;
        *a6 = 1;
      }
      return result;
    }
    sub_1041A750(v19, (int)a2);
  }
  else if ( v11 != 11 || (*(_BYTE *)(this + 524) & 4) == 0 )
  {
    goto LABEL_9;
  }
  if ( sub_10418750(a2) )
    *a6 = 4;
  return 0;
}
