int *__thiscall sub_1031EFC0(_DWORD *this, int a2)
{
  int *result; // eax
  char *v4; // eax
  int v5; // ebx
  int v6; // eax
  bool v7; // zf
  signed int v8; // eax
  int v9; // esi
  int v10; // edx
  int *v11; // esi
  int (__thiscall *v12)(int *); // eax
  char *v13; // eax
  int v14; // edx
  double v15; // [esp+18h] [ebp-8h] BYREF

  result = (int *)this[1042];
  if ( result != (int *)5 )
  {
    v4 = sub_1025F440("damage%d", result);
    result = (int *)sub_100BEF30((int)this, v4);
    v5 = (int)result;
    if ( result )
    {
      v6 = this[1042];
      if ( !v6 )
        goto LABEL_9;
      v8 = v6 & 0x80000001;
      v7 = v8 == 0;
      if ( v8 < 0 )
        v7 = (((_BYTE)v8 - 1) | 0xFFFFFFFE) == -1;
      if ( v7 )
      {
        result = (int *)sub_10283150();
        v9 = (int)result;
        if ( result )
        {
          sub_10019680(&this[this[1042] + 1037], (int)result);
          HIDWORD(v15) = 48;
          sub_100C1E10((float *)(v9 + 828), (int *)&v15 + 1);
          *((float *)&v15 + 1) = 0.5;
          sub_102BBDC0((float *)(v9 + 832), (float *)&v15 + 1);
          sub_100C34C0((float *)(v9 + 800), 0.15000001, 0.15000001, 0.15000001);
          sub_102BC090((float *)(v9 + 812), 0.0, 0.0, 0.0);
          HIDWORD(v15) = 24;
          sub_10284420((float *)(v9 + 848), (int *)&v15 + 1);
          HIDWORD(v15) = 80;
          sub_10284480((float *)(v9 + 852), (int *)&v15 + 1);
          HIDWORD(v15) = 8;
          sub_102842B0((float *)(v9 + 856), (int *)&v15 + 1);
          v15 = 0.2;
          sub_1031B680((float *)(v9 + 824), &v15);
          HIDWORD(v15) = 16;
          sub_102843C0((float *)(v9 + 840), (int *)&v15 + 1);
          HIDWORD(v15) = 64;
          sub_100C1DB0((float *)(v9 + 844), (int *)&v15 + 1);
          sub_100F5880((int *)v9, -1.0);
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v9 + 140))(v9, this, v5);
          sub_100E10C0(v9, &flt_106F1CA8);
          result = (int *)sub_100E0970(v9, v10, 0, 0);
          ++this[1042];
        }
      }
      else
      {
LABEL_9:
        result = (int *)sub_10283340();
        v11 = result;
        if ( result )
        {
          v12 = *(int (__thiscall **)(int *))(*result + 8);
          HIDWORD(v15) = &this[this[1042] + 1037];
          *(_DWORD *)HIDWORD(v15) = *(_DWORD *)v12(v11);
          v13 = sub_1025F440("damage%d", this[1042]);
          sub_102851D0((int)v11, (int)this, v13);
          (*(void (__thiscall **)(int *, _DWORD *, int))(*v11 + 140))(v11, this, v5);
          sub_100E10C0((int)v11, &flt_106F1CA8);
          sub_100E0970((int)v11, v14, 0, 0);
          result = (int *)sub_100F5880(v11, -1.0);
          ++this[1042];
        }
      }
    }
  }
  return result;
}
