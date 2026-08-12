int __thiscall sub_1034CD30(_DWORD *this, float *a2)
{
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  char Buffer[32]; // [esp+20h] [ebp-3Ch] BYREF
  float v9[3]; // [esp+40h] [ebp-1Ch] BYREF
  float v10[3]; // [esp+4Ch] [ebp-10h] BYREF
  int v11; // [esp+58h] [ebp-4h] BYREF

  sub_1013D350(a2, &flt_106F1CB4, (int)this, 232, 500, 1065, 0.0, 0, -1, 0, 0);
  result = sub_10261B70(a2, 25.0, 150.0, 1.0, 750.0, 0, 0);
  if ( this[422] != 4 )
  {
    result = sub_10283150();
    v4 = result;
    if ( result )
    {
      sub_10429A00(Buffer, 0x20u, "damage%d", this[422]);
      v5 = sub_100BEF30((int)this, Buffer);
      ++this[422];
      v6 = v5;
      v11 = 20;
      sub_100C1E10((float *)(v4 + 828), &v11);
      *(float *)&v11 = 4.0;
      sub_102BBDC0((float *)(v4 + 832), (float *)&v11);
      sub_100C34C0((float *)(v4 + 800), 0.69999999, 0.69999999, 0.69999999);
      sub_102BC090((float *)(v4 + 812), 0.60000002, 0.60000002, 0.60000002);
      v11 = 15;
      sub_10284420((float *)(v4 + 848), &v11);
      v11 = 50;
      sub_10284480((float *)(v4 + 852), &v11);
      v11 = 15;
      sub_102842B0((float *)(v4 + 856), &v11);
      *(float *)&v11 = 0.75;
      sub_100C1F20((float *)(v4 + 824), (float *)&v11);
      v11 = 10;
      sub_102843C0((float *)(v4 + 840), &v11);
      v11 = 20;
      sub_100C1DB0((float *)(v4 + 844), &v11);
      *(float *)&v11 = 100.0;
      sub_10284260((float *)(v4 + 860), (float *)&v11);
      *(float *)&v11 = 120.0;
      sub_10045790((float *)(v4 + 864), (float *)&v11);
      sub_100F5880((int *)v4, 5.0);
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 140))(v4, this, v6);
      if ( v6 )
        sub_100E10C0(v4, &flt_106F1CA8);
      else
        sub_100E0D20(v4, a2);
      v10[0] = -1.0;
      v10[1] = 0.0;
      v10[2] = 0.0;
      sub_10422540(v10, v9);
      sub_100E0EA0(v4, v9);
      return sub_100E0970(v4, v7, 0, 0);
    }
  }
  return result;
}
