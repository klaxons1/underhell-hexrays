bool __userpurge sub_100822A0@<al>(_DWORD *a1@<ecx>, double a2@<st0>, float *a3)
{
  float **v4; // eax
  float *v5; // edi
  int v6; // ebx
  float *v7; // eax
  double v8; // st7
  float v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+18h] [ebp-8h] BYREF
  int v12; // [esp+1Ch] [ebp-4h]

  v4 = (float **)a1[9];
  v5 = *v4;
  if ( *v4 )
  {
    v6 = a1[1];
    v12 = a1[3];
    v7 = (float *)sub_100A6030(v4);
    sub_10079A70(v12, (float *)(v6 + 716), v7);
  }
  else
  {
    a2 = 0.0;
  }
  v8 = *a3 - a2;
  v11 = 0;
  if ( v8 < 0.1 )
    return 0;
  v10 = v8;
  return sub_10080210((int)a1, (int)a3, (int)v5, v5, v10, 1, 0, &v11) != 0;
}
