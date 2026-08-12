int __thiscall sub_1002D990(int this, float a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // edx
  int v10; // eax
  float *v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  float *v17; // [esp+8h] [ebp-34h]
  float v18; // [esp+Ch] [ebp-30h]
  float v19; // [esp+10h] [ebp-2Ch]
  float v20; // [esp+10h] [ebp-2Ch]
  int v21[2]; // [esp+20h] [ebp-1Ch] BYREF
  int v22; // [esp+28h] [ebp-14h]
  int v23; // [esp+2Ch] [ebp-10h]
  float v24; // [esp+30h] [ebp-Ch]
  int v25; // [esp+34h] [ebp-8h]
  int v26; // [esp+38h] [ebp-4h] BYREF

  v26 = 0;
  if ( sub_1002CB50(this, (int)v21, a2, a3, &v26) )
  {
    if ( LOBYTE(v21[0]) )
    {
      v4 = *(unsigned __int16 *)(this + 14);
      v5 = *(unsigned __int16 *)(this + 12);
      v25 = v4 + v23;
      if ( v4 + v23 >= v5 )
        v25 = v4 + v23 - v5;
      v6 = v4 + v22;
      if ( v4 + v22 >= v5 )
        v6 -= v5;
      v7 = v21[1] + v4;
      if ( v7 >= v5 )
        v7 -= v5;
      sub_1002CDF0(
        (_BYTE *)this,
        *(_DWORD *)(this + 4),
        v24,
        *(_DWORD *)(this + 8) + 8 * v7,
        (float *)(*(_DWORD *)(this + 8) + 8 * v6),
        (float *)(*(_DWORD *)(this + 8) + 8 * v25),
        0);
      goto LABEL_24;
    }
    v8 = v23;
    v9 = v22;
    if ( v23 == v22 )
    {
      v10 = v23 + 1;
      v25 = v23 + 1;
      if ( byte_10433C4C )
      {
        if ( v10 >= 0 && v10 < *(unsigned __int16 *)(this + 16) )
        {
          if ( 0.0 != *(float *)sub_10027640((unsigned __int16 *)(this + 8), v23 + 1)
            && a3 > 0.000001
            && *(float *)(this + 24) >= (double)flt_10433C50 )
          {
            v19 = *(float *)(dword_10433C74 + 44);
            v18 = a2 - a3;
            v17 = (float *)sub_10027640((unsigned __int16 *)(this + 8), v8);
            v11 = (float *)sub_10027640((unsigned __int16 *)(this + 8), v25);
            sub_1002C910((unsigned __int8 *)this, *(_DWORD *)(this + 4), v11, v17, v18, v19);
LABEL_24:
            v20 = a2 - a3 - 0.050000001;
            sub_1002C8A0(this, v20);
            return v26;
          }
          v9 = v22;
        }
      }
    }
    v12 = *(unsigned __int16 *)(this + 14);
    v13 = *(unsigned __int16 *)(this + 12);
    v14 = v12 + v8;
    if ( v14 >= v13 )
      v14 -= v13;
    v15 = v9 + v12;
    if ( v15 >= v13 )
      v15 -= v13;
    sub_1002C710(this, *(_DWORD *)(this + 4), v24, *(_DWORD *)(this + 8) + 8 * v15, *(_DWORD *)(this + 8) + 8 * v14);
    goto LABEL_24;
  }
  return v26;
}
