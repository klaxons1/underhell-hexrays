int __thiscall sub_1003AF70(int this, float a2, float a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  float *v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  float *v20; // [esp+8h] [ebp-34h]
  float v21; // [esp+Ch] [ebp-30h]
  float v22; // [esp+10h] [ebp-2Ch]
  float v23; // [esp+10h] [ebp-2Ch]
  int v24[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h]
  float v27; // [esp+30h] [ebp-Ch]
  int v28; // [esp+34h] [ebp-8h]
  int v29; // [esp+38h] [ebp-4h] BYREF

  v29 = 0;
  if ( sub_10038CB0(this, (int)v24, a2, a3, &v29) )
  {
    if ( LOBYTE(v24[0]) )
    {
      v4 = *(unsigned __int16 *)(this + 14);
      v5 = *(unsigned __int16 *)(this + 12);
      v6 = v4 + v26;
      if ( v4 + v26 >= v5 )
        v6 -= v5;
      v7 = v4 + v25;
      if ( v4 + v25 >= v5 )
        v7 -= v5;
      v8 = *(unsigned __int16 *)(this + 12);
      v9 = v24[1] + v4;
      if ( v9 >= v8 )
        v9 -= v8;
      sub_1003AA60(
        (_BYTE *)this,
        *(float **)(this + 4),
        v27,
        *(_DWORD *)(this + 8) + 16 * v9,
        (float *)(*(_DWORD *)(this + 8) + 16 * v7),
        (float *)(*(_DWORD *)(this + 8) + 16 * v6),
        0);
      goto LABEL_28;
    }
    v10 = v26;
    if ( v26 == v25 )
    {
      v11 = v26 + 1;
      v28 = v26 + 1;
      if ( byte_10433C4C
        && v11 >= 0
        && v11 < *(unsigned __int16 *)(this + 16)
        && 0.0 != *(float *)sub_10036A90((unsigned __int16 *)(this + 8), v26 + 1)
        && a3 > 0.000001
        && *(float *)(this + 24) >= (double)flt_10433C50 )
      {
        v22 = *(float *)(dword_10433C74 + 44);
        v21 = a2 - a3;
        v20 = (float *)sub_10036A90((unsigned __int16 *)(this + 8), v10);
        v12 = (float *)sub_10036A90((unsigned __int16 *)(this + 8), v28);
        sub_1003A530((unsigned __int8 *)this, *(float **)(this + 4), v12, v20, v21, v22);
LABEL_28:
        v23 = a2 - a3 - 0.050000001;
        sub_1003A830(this, v23);
        return v29;
      }
      v13 = *(unsigned __int16 *)(this + 14);
      v14 = *(unsigned __int16 *)(this + 12);
      v15 = v13 + v10;
      if ( v13 + v10 >= v14 )
        v15 -= v14;
      v16 = v25 + v13;
      if ( v16 >= v14 )
        v16 -= v14;
    }
    else
    {
      v17 = *(unsigned __int16 *)(this + 14);
      v18 = *(unsigned __int16 *)(this + 12);
      v15 = v17 + v26;
      if ( v17 + v26 >= v18 )
        v15 -= v18;
      v16 = v25 + v17;
      if ( v16 >= v18 )
        v16 -= v18;
    }
    sub_1003A8A0(
      (_BYTE *)this,
      *(float **)(this + 4),
      v27,
      *(_DWORD *)(this + 8) + 16 * v16,
      *(_DWORD *)(this + 8) + 16 * v15);
    goto LABEL_28;
  }
  return v29;
}
