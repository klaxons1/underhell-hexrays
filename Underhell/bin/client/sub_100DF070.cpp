int __thiscall sub_100DF070(int this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // edx
  int result; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st7
  int v9; // [esp+10h] [ebp-10h]
  int v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 17300);
  v3 = *(unsigned __int8 *)(v2 + 4);
  v9 = *(unsigned __int8 *)(v2 + 6);
  v4 = *(_DWORD *)v2;
  v10 = *(unsigned __int8 *)(v2 + 5);
  result = 0;
  v6 = 0;
  v11 = 0;
  v12 = 0;
  if ( *(int *)v2 >= 0 )
  {
    if ( v4 <= 1 )
    {
      v6 = 0;
      v11 = 0;
      v12 = 0;
      goto LABEL_10;
    }
    if ( v4 == 2 )
    {
      v7 = *(float *)(v2 + 20) + *(float *)(this + 17360);
      *(float *)(this + 17360) = v7;
      if ( v7 > *(float *)(this + 17304) )
      {
        result = 0;
        v9 = 0;
        v10 = 0;
        v3 = 0;
        goto LABEL_15;
      }
      v8 = *(float *)(this + 17304) - v7;
      v6 = 0;
      v11 = 0;
      v12 = 0;
      if ( *(float *)(this + 17364) >= (double)*(float *)(this + 17304) )
      {
        if ( v8 > *(float *)(v2 + 32) )
          goto LABEL_14;
        v6 = *(unsigned __int8 *)(v2 + 10);
        v12 = *(unsigned __int8 *)(v2 + 8);
        v11 = *(unsigned __int8 *)(v2 + 9);
        result = (int)(255.0 - (v8 * (1.0 / *(float *)(v2 + 32)) * 255.0 + 0.5));
LABEL_11:
        if ( result > 255 )
        {
          result = 255;
          goto LABEL_15;
        }
        if ( result >= 0 )
          goto LABEL_15;
LABEL_14:
        result = 0;
        goto LABEL_15;
      }
LABEL_10:
      result = *(_DWORD *)(this + 17356);
      goto LABEL_11;
    }
  }
LABEL_15:
  *(_DWORD *)(this + 17340) = (result * v12 + v3 * (255 - result)) >> 8;
  *(_DWORD *)(this + 17344) = (result * v11 + v10 * (255 - result)) >> 8;
  *(_DWORD *)(this + 17348) = (result * v6 + v9 * (255 - result)) >> 8;
  return result;
}
