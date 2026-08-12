void __thiscall sub_1036ABC0(void *this, int *a2)
{
  int v3; // ebx
  int v4; // eax
  double v5; // st7
  _DWORD *v6; // eax
  float v7; // [esp+0h] [ebp-B4h]
  int v8; // [esp+4h] [ebp-B0h]
  _BYTE v9[80]; // [esp+14h] [ebp-A0h] BYREF
  int v10[20]; // [esp+64h] [ebp-50h] BYREF

  if ( a2[55] > 1 )
  {
    sub_10247EC0(v10);
    v3 = a2[55];
    if ( sub_1036A410((int)this, (float *)v10) >= v3 )
      *(float *)&v10[13] = (float)(v3 - 1);
    sub_100D9E70(a2, (int)a2, v10);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 264))(a2) )
    {
      v4 = a2[55];
      if ( v4 > 1 )
      {
        if ( *(_DWORD *)(dword_10698344 + 48) )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 320))(a2) )
          {
            v5 = *(float *)(dword_106E82CC + 44);
            v8 = 4;
LABEL_12:
            v7 = v5;
            v6 = (_DWORD *)sub_10248110((int)v9, (int)this, (int)this, v7, v8, 0);
            sub_100D9E70(a2, (int)a2, v6);
            return;
          }
          v5 = (double)(a2[55] - 1);
        }
        else
        {
          v5 = (double)(v4 - 1);
        }
        v8 = 0x20000;
        goto LABEL_12;
      }
    }
  }
}
