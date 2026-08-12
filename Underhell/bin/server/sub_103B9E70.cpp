char __thiscall sub_103B9E70(int this, int a2, int a3)
{
  int *v3; // ebx
  bool v4; // zf
  int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  int v9; // edi
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  double v13; // st7
  int v14; // eax
  int v15; // esi
  int v16; // eax
  _DWORD v17[2]; // [esp+1Ch] [ebp-28h] BYREF
  int v18; // [esp+24h] [ebp-20h]
  _DWORD *v19; // [esp+28h] [ebp-1Ch]
  _BYTE v20[4]; // [esp+2Ch] [ebp-18h] BYREF
  int *v21; // [esp+30h] [ebp-14h]
  int v22; // [esp+34h] [ebp-10h] BYREF
  int v23; // [esp+38h] [ebp-Ch]
  float i; // [esp+3Ch] [ebp-8h] BYREF
  int v25; // [esp+40h] [ebp-4h]

  v3 = (int *)this;
  v4 = *(_BYTE *)(this + 3624) == 0;
  v21 = (int *)this;
  if ( !v4 )
  {
    sub_103B51C0((_DWORD *)this);
    sub_1025FAC0((int)v3);
    return 1;
  }
  if ( *(int *)(dword_106B31C8 + 20) > 1
    || (v23 = sub_10261B20()) == 0
    || (v6 = *(_DWORD *)(dword_106EB744 + 48), v6 <= 0) )
  {
    v16 = sub_101D0270((int)v3, v3[208], a2, 28, 0);
    sub_101CDE70(v16);
    sub_1025FAC0((int)v3);
    return 1;
  }
  if ( v6 >= 90 )
  {
    v25 = 2;
LABEL_9:
    v18 = 0;
    v19 = v17;
    v7 = (_DWORD *)sub_103AFA20(&dword_1069E3E0, 0);
    for ( i = *(float *)&v7; v7; i = *(float *)&v7 )
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*v3 + 28))(v3, &v22);
      if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v7 + 28))(v7, v20) == *v8
        && !sub_101CB310(v7)
        && v18 < 2 )
      {
        sub_103B9BC0(v17, &i);
      }
      v7 = (_DWORD *)sub_103AFA20(&dword_1069E3E0, (int)v7);
    }
    if ( v18 >= v25 )
    {
      v9 = 0;
      i = 3.4028235e38;
      v22 = 0;
      if ( v18 > 0 )
      {
        v10 = v23 + 580;
        do
        {
          if ( (*(_DWORD *)(v23 + 252) & 0x800) != 0 )
            sub_100DAE60(v23);
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)(v17[v9] + 320) + 8))(v17[v9] + 320);
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(v17[v9] + 320) + 4))(v17[v9] + 320);
          v13 = sub_104243D0(v12, v11, v10);
          if ( i > v13 )
          {
            v14 = v17[v9];
            i = v13;
            v22 = v14;
          }
          ++v9;
        }
        while ( v9 < v18 );
        if ( v22 )
          sub_101D0A70(v22, 0.75, 1.5);
        v3 = v21;
      }
    }
    goto LABEL_26;
  }
  v25 = v6 >= 80;
  if ( v6 >= 80 )
    goto LABEL_9;
LABEL_26:
  v15 = sub_101D0270((int)v3, v3[208], a2, 28, 0);
  sub_101CDE70(v15);
  if ( v25 )
  {
    sub_103B8110(v3, v15, 600.0);
  }
  else
  {
    sub_101D0A70(v15, 6.0, 0.75);
    sub_103B8110(v3, v15, 6.0);
  }
  sub_1025FAC0((int)v3);
  return 1;
}
