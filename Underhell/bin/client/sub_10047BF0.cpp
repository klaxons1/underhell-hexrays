char __thiscall sub_10047BF0(int this, float a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int *v5; // edi
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  int v9; // edi
  _DWORD *v10; // eax
  float v13; // [esp+8h] [ebp-10h]
  char v14; // [esp+17h] [ebp-1h]
  float v15; // [esp+20h] [ebp+8h]
  float v16; // [esp+20h] [ebp+8h]

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v3 = *(_DWORD **)(this + 1940);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1940);
  else
    v4 = 0;
  sub_10047B60(this);
  v14 = sub_1002B5A0(this, SLOBYTE(a2));
  v15 = a2 - *(float *)(this + 96);
  v5 = (int *)sub_100422D0();
  if ( sub_10034D10((_BYTE *)this) || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 428))(this) )
  {
    if ( v5 )
    {
      v6 = sub_100423F0(v5);
      v7 = (float *)off_103DC81C;
    }
    else
    {
      v7 = (float *)off_103DC81C;
      v6 = *((float *)off_103DC81C + 3);
    }
    v15 = v7[8] * v7[7] + v6 - *(float *)(this + 96);
  }
  if ( v15 < 0.0 )
    v15 = 0.0;
  v8 = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 684))(this, v4, *(_DWORD *)(this + 1808))
     * v15;
  if ( v8 >= 1.0 )
  {
    v9 = *(_DWORD *)(this + 1808);
    if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
      sub_10026520(this);
    v10 = *(_DWORD **)(this + 1940);
    if ( !v10 || !*v10 )
      v10 = 0;
    if ( (unsigned __int8)sub_100256E0((int)v10, v9) )
    {
      v16 = v8;
      v8 = fmod(v16, 1.0);
    }
    else
    {
      v8 = 0.99900001;
    }
  }
  v13 = v8;
  sub_10025680((float *)this, v13);
  return v14;
}
