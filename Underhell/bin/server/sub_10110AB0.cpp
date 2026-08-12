int __usercall sub_10110AB0@<eax>(int a1@<esi>, int *a2)
{
  int result; // eax
  _DWORD *v3; // edi
  int v4; // eax
  bool v5; // cc
  const char *v6; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  const char *v10; // eax
  int v11; // eax
  const char *v12; // eax
  float *v13; // eax
  _BYTE v14[12]; // [esp+4h] [ebp-F4h] BYREF
  float v15; // [esp+10h] [ebp-E8h]
  float v16; // [esp+14h] [ebp-E4h]
  float v17; // [esp+18h] [ebp-E0h]
  float v18[15]; // [esp+1Ch] [ebp-DCh] BYREF
  float v19; // [esp+58h] [ebp-A0h] BYREF
  float v20; // [esp+5Ch] [ebp-9Ch]
  float v21; // [esp+60h] [ebp-98h]
  float v22[3]; // [esp+70h] [ebp-88h] BYREF
  float v23[15]; // [esp+7Ch] [ebp-7Ch] BYREF
  float v24[3]; // [esp+B8h] [ebp-40h] BYREF
  float v25[3]; // [esp+C4h] [ebp-34h] BYREF
  float v26; // [esp+D0h] [ebp-28h] BYREF
  float v27; // [esp+D4h] [ebp-24h]
  float v28; // [esp+D8h] [ebp-20h]
  float v29; // [esp+DCh] [ebp-1Ch] BYREF
  float v30; // [esp+E0h] [ebp-18h]
  float v31; // [esp+E4h] [ebp-14h]
  float v32; // [esp+E8h] [ebp-10h]
  float v33; // [esp+ECh] [ebp-Ch]
  float v34; // [esp+F0h] [ebp-8h]
  float v35; // [esp+F4h] [ebp-4h]
  int savedregs; // [esp+F8h] [ebp+0h] BYREF

  result = sub_10153490();
  v3 = (_DWORD *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      v4 = *a2;
      if ( *a2 >= 2 )
      {
        v32 = 1024.0;
        if ( v4 >= 3 )
        {
          v5 = v4 <= 2;
          v6 = String;
          if ( !v5 )
            v6 = (const char *)a2[260];
          v35 = COERCE_FLOAT(atoi(v6));
          v32 = (float)SLODWORD(v35);
        }
        v7 = *a2;
        v34 = 0.0;
        if ( v7 >= 4 )
        {
          v5 = v7 <= 3;
          v8 = String;
          if ( !v5 )
            v8 = (const char *)a2[261];
          v35 = COERCE_FLOAT(atoi(v8));
          v34 = (float)SLODWORD(v35);
        }
        v9 = *a2;
        v33 = 0.0;
        if ( v9 >= 5 )
        {
          v5 = v9 <= 4;
          v10 = String;
          if ( !v5 )
            v10 = (const char *)a2[262];
          v33 = atof(v10);
        }
        v11 = *a2;
        v35 = 0.0;
        if ( v11 >= 6 )
        {
          v5 = v11 <= 5;
          v12 = String;
          if ( !v5 )
            v12 = (const char *)a2[263];
          v35 = atof(v12);
        }
        v13 = (float *)(*(int (__thiscall **)(_DWORD *, int))(*v3 + 508))(v3, a1);
        v29 = *v13;
        v30 = v13[1];
        v31 = v13[2];
        sub_10422220(&v29, v24);
        (*(void (__thiscall **)(_DWORD *, float *))(*v3 + 504))(v3, v25);
        v26 = v24[0] * v32 + v25[0];
        v27 = v24[1] * v32 + v25[1];
        v28 = v32 * v24[2] + v25[2];
        sub_1002A5F0((int)&savedregs, (int)a2, v25, &v26, -1, (int)v3, 0, (int)v14);
        sub_1001F130(&v19);
        if ( v18[5] >= 1.0 )
        {
          v19 = v26;
          v20 = v27;
          v21 = v28;
          v23[0] = v29;
          v23[1] = v30;
          v23[2] = v31;
          sub_10422220(&v29, v22);
        }
        else
        {
          v19 = v15;
          v20 = v16;
          v21 = v17;
          sub_10422540(v18, v23);
          v22[0] = v18[0];
          v22[1] = v18[1];
          v22[2] = v18[2];
        }
        LODWORD(v23[4]) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3[6]);
        v5 = *a2 <= 1;
        v23[6] = v33;
        LODWORD(v23[3]) = (int)v34;
        v23[5] = v35;
        if ( v5 )
          return sub_1028E890(String, &v19);
        else
          return sub_1028E890(a2[259], &v19);
      }
      else
      {
        Msg(" Usage: test_dispatcheffect <effect name> <distance away> <flags> <magnitude> <scale>\n ");
        return Msg("\t\t defaults are: <distance 1024> <flags 0> <magnitude 0> <scale 0>\n");
      }
    }
  }
  return result;
}
