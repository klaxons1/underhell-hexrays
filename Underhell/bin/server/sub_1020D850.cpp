void __thiscall sub_1020D850(int this, int a2)
{
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  double v6; // st7
  int v7; // edi
  float v8; // [esp+0h] [ebp-24h]
  float v9; // [esp+4h] [ebp-20h]
  int v10; // [esp+8h] [ebp-1Ch]
  float v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+20h] [ebp-4h] BYREF

  v3 = *(float *)(this + 864);
  v4 = *(_DWORD *)(this + 908);
  v5 = v3;
  v6 = *(float *)(this + 904);
  v10 = a2;
  v9 = v5;
  *(_DWORD *)(this + 1524) = a2;
  v8 = v6;
  if ( sub_100BF350(this, v4, v8, v9, v10, &a2, (float *)&v12, (_DWORD *)(this + 1528)) )
    sub_1020D700(this, a2);
  sub_100EC3F0((_DWORD *)this, (int)sub_102113C0, 0.0, 0);
  v7 = dword_106B31C8;
  if ( sub_100E9200((_DWORD *)this, 0) <= *(float *)(v7 + 12) )
  {
    v11 = *(float *)(v7 + 12) + 0.1;
    sub_100EC4A0((int *)this, v11, 0);
  }
}
