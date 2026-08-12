int __thiscall sub_101F7A60(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // edi
  void *v20; // eax
  unsigned int v21; // ebx
  char v22; // cl
  _DWORD *v23; // edx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int result; // eax
  bool v28; // cc
  int v29; // [esp+10h] [ebp-14h]
  unsigned int v30; // [esp+10h] [ebp-14h]
  int v31; // [esp+14h] [ebp-10h]
  int v32; // [esp+14h] [ebp-10h]
  unsigned int v33; // [esp+18h] [ebp-Ch]
  int v34; // [esp+1Ch] [ebp-8h]
  int v35; // [esp+20h] [ebp-4h]

  v2 = a2[136];
  if ( v2 > 5000 )
    v2 = 5000;
  this[18] = v2;
  this[17] = 4 * ((v2 + 3) / 4) + 4;
  v4 = sub_100DDA40(1552);
  this[1513] = v4;
  this[1645] = (v4 + 15) & 0xFFFFFFF0;
  v5 = a2[3];
  this[1514] = v5;
  v6 = a2[2];
  this[1515] = v6;
  v7 = a2[3] & a2[2] & a2[4];
  this[1516] = v7;
  v8 = 2;
  v35 = a2[3] & a2[4] & ~a2[2];
  v29 = 0;
  v31 = 0;
  v9 = v6 | v5;
  do
  {
    v10 = 1 << (v8 - 2);
    v11 = (v10 & 0x68055) != 0 ? 3 : 1;
    if ( (v10 & v9) != 0 )
      v29 += v11;
    if ( (v10 & v7) != 0 )
      v31 += v11;
    v12 = 1 << (v8 - 1);
    v13 = (v12 & 0x68055) != 0 ? 3 : 1;
    if ( (v12 & v9) != 0 )
      v29 += v13;
    if ( (v12 & v7) != 0 )
      v31 += v13;
    v14 = ((1 << v8) & 0x68055) != 0 ? 3 : 1;
    if ( ((1 << v8) & v9) != 0 )
      v29 += v14;
    if ( ((1 << v8) & v7) != 0 )
      v31 += v14;
    v15 = 1 << (v8 + 1);
    v16 = (v15 & 0x68055) != 0 ? 3 : 1;
    if ( (v15 & v9) != 0 )
      v29 += v16;
    if ( (v15 & v7) != 0 )
      v31 += v16;
    v8 += 4;
  }
  while ( v8 - 2 < 32 );
  v17 = 4 * v29 * this[17] + 16;
  v18 = (void *)sub_100DDA40(v17);
  this[1511] = v18;
  memset(v18, 0, v17);
  if ( v31 )
  {
    v19 = 4 * v31 * this[17] + 16;
    v20 = (void *)sub_100DDA40(v19);
    this[1512] = v20;
    memset(v20, 0, v19);
  }
  v21 = (this[1511] + 15) & 0xFFFFFFF0;
  v22 = 0;
  v30 = v21;
  v33 = (this[1512] + 15) & 0xFFFFFFF0;
  v34 = 0;
  v32 = 0;
  v23 = this + 1581;
  do
  {
    v24 = 1 << v22;
    v25 = ((1 << v22) & 0x68055) != 0 ? 3 : 1;
    if ( ((1 << v22) & v9) != 0 )
    {
      *(v23 - 64) = v21;
      *v23 = 4 * v25;
      v21 += 4 * v25 * this[17];
      v30 = v21;
    }
    else
    {
      v21 = v30;
      *(v23 - 64) = v32 + this[1645];
      *v23 = 0;
    }
    if ( (v24 & a2[4]) != 0 )
    {
      if ( (v24 & this[1516]) != 0 )
      {
        v23[32] = 4 * v25;
        *(v23 - 32) = v33;
        v33 += 4 * v25 * this[17];
        goto LABEL_35;
      }
      if ( (v24 & v35) != 0 )
      {
        v26 = *(v23 - 64);
        v23[32] = *v23;
      }
      else
      {
        v26 = v32 + this[1645];
        v23[32] = 0;
      }
    }
    else
    {
      v26 = 0;
      v23[32] = 0;
    }
    *(v23 - 32) = v26;
LABEL_35:
    result = v32 + 48;
    v22 = v34 + 1;
    ++v23;
    v28 = v32 + 48 < 1536;
    ++v34;
    v32 += 48;
  }
  while ( v28 );
  return result;
}
