void __thiscall sub_103F92F0(int this, int *a2, int a3)
{
  int *v4; // esi
  int v5; // eax
  int v6; // eax
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int v10; // esi
  int v11; // eax
  _BYTE v12[12]; // [esp+1Ch] [ebp-78h] BYREF
  float v13[18]; // [esp+28h] [ebp-6Ch] BYREF
  float v14[3]; // [esp+70h] [ebp-24h] BYREF
  float v15[3]; // [esp+7Ch] [ebp-18h] BYREF
  float v16[3]; // [esp+88h] [ebp-Ch] BYREF
  int savedregs; // [esp+94h] [ebp+0h] BYREF
  float v18; // [esp+9Ch] [ebp+8h]
  float v19; // [esp+9Ch] [ebp+8h]

  v4 = (int *)sub_100D1940((_DWORD *)this);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int *))(*v4 + 320))(v4) )
    v4 = 0;
  v5 = *a2;
  if ( *a2 > 3016 )
  {
    if ( v5 == 3900 )
    {
      *(_BYTE *)(this + 1400) = 1;
      return;
    }
    goto LABEL_15;
  }
  if ( *a2 == 3016 )
  {
    sub_103F8EE0((void *)this, v4);
    sub_100CF490((char *)v4, 1, *(_DWORD *)(this + 1192));
    goto LABEL_9;
  }
  v6 = v5 - 3005;
  if ( !v6 )
  {
    sub_103F8D70(this, v4);
    sub_100CF490((char *)v4, 1, *(_DWORD *)(this + 1192));
    goto LABEL_9;
  }
  if ( v6 != 8 )
  {
LABEL_15:
    sub_100CFE60((_DWORD *)this, (int)a2, a3);
    return;
  }
  sub_103F9050(this, (float *)&savedregs, this, (int)v4, (int)v4);
  sub_100CF490((char *)v4, 1, *(_DWORD *)(this + 1192));
LABEL_9:
  v18 = *(float *)(dword_106B31C8 + 12) + 0.5;
  if ( *(_DWORD *)(this + 1132) != LODWORD(v18) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 1132);
    }
    *(float *)(this + 1132) = v18;
  }
  v19 = *(float *)(dword_106B31C8 + 12) + 0.5;
  if ( *(_DWORD *)(this + 1136) != LODWORD(v19) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 1136);
    }
    *(float *)(this + 1136) = v19;
  }
  if ( *(_DWORD *)(this + 1140) != COERCE_INT(3.4028235e38) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 1140);
    }
    *(float *)(this + 1140) = 3.4028235e38;
  }
  v10 = sub_100D1940((_DWORD *)this);
  if ( v10 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v10 + 968))(v10, v16);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 508))(v10);
    sub_10422220(v11, v15);
    v14[0] = v15[0] * 1024.0 + v16[0];
    v14[1] = v15[1] * 1024.0 + v16[1];
    v14[2] = 1024.0 * v15[2] + v16[2];
    sub_1002A5F0((int)&savedregs, v10, v16, v14, 16395, v10, 0, (int)v12);
    sub_1023D4B0(2048, v13, 384, 0.2, v10, 0, 0);
  }
}
