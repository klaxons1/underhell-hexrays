int __thiscall sub_1019E380(int this, float *a2, float a3)
{
  int result; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // esi
  double v14; // st7
  int v15[2]; // [esp+10h] [ebp-14h] BYREF
  float v16; // [esp+18h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-8h]
  float v18; // [esp+20h] [ebp-4h]
  float *v19; // [esp+2Ch] [ebp+8h]

  result = *(_DWORD *)(this + 4);
  i = result;
  if ( result )
  {
    v6 = (int)((*a2 - *(float *)(this + 20)) / *(float *)(this + 8));
    if ( v6 >= 0 )
    {
      v7 = *(_DWORD *)(this + 12);
      if ( v6 >= v7 )
        v6 = v7 - 1;
    }
    else
    {
      v6 = 0;
    }
    v8 = (int)((a2[1] - *(float *)(this + 24)) / *(float *)(this + 8));
    if ( v8 >= 0 )
    {
      v9 = *(_DWORD *)(this + 16);
      if ( v8 >= v9 )
        v8 = v9 - 1;
    }
    else
    {
      v8 = 0;
    }
    v10 = v8 * *(_DWORD *)(this + 12);
    v18 = -100000000.0;
    v15[0] = *(int *)a2;
    v15[1] = *((int *)a2 + 1);
    v16 = a2[2] + 5.0;
    v11 = (_DWORD *)(i + 36 * (v6 + v10));
    v12 = v11[3];
    for ( i = 0; v12 != -1; v12 = *(_DWORD *)(*v11 + v13 + 8) )
    {
      v13 = 12 * v12;
      v19 = *(float **)(12 * v12 + *v11);
      if ( sub_1018AC50(v19, (float *)v15, 0.0) )
      {
        v14 = sub_1018AD70(v19, (float *)v15);
        if ( v16 >= v14 && a2[2] - a3 <= v14 && v18 < v14 )
        {
          v18 = v14;
          i = (int)v19;
        }
      }
    }
    return i;
  }
  return result;
}
