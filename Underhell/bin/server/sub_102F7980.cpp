void __thiscall sub_102F7980(float *this, _DWORD *a2)
{
  float *v2; // esi
  void (__thiscall *v3)(float *, int *); // edx
  char *v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  _DWORD *v8; // eax
  void (__thiscall *v9)(float *, int *); // edx
  char Buffer[256]; // [esp+28h] [ebp-158h] BYREF
  _DWORD v11[20]; // [esp+128h] [ebp-58h] BYREF
  int v12; // [esp+178h] [ebp-8h] BYREF
  float v13; // [esp+17Ch] [ebp-4h]

  v2 = this;
  switch ( *a2 )
  {
    case 0x7C:
      if ( !*(_DWORD *)(dword_106E280C + 48) )
        goto LABEL_18;
      v3 = *(void (__thiscall **)(float *, int *))(*(_DWORD *)this + 1264);
      v13 = 0.0;
      v12 = 129;
      v3(this, &v12);
      if ( !sub_10020E90(v2) )
      {
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v4 = sub_1001E280(Buffer, "[Nav] %s", "TASK_STOP_MOVING Complete\n");
          sub_10029660(v2, (int)v4);
        }
      }
      return;
    case 0x9D:
      if ( sub_102F4730(this)
        && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) )
      {
        v5 = sub_102F4730(v2);
        v6 = (int)*off_1061B7A0;
        v7 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v5 + 576))(v5, 1, 1, 0);
        (*(void (__thiscall **)(int (__stdcall ***)(char), int))(v6 + 12))(off_1061B7A0, v7);
        v8 = (_DWORD *)sub_102F4730(v2);
        sub_1023C380(v8, (int)"DoSpark", 0.0, 0);
      }
      goto LABEL_2;
    case 0xA0:
LABEL_2:
      if ( !sub_10022810(v2) )
        return;
      this = v2;
LABEL_13:
      sub_10027CD0(this, 0);
      break;
    case 0xA2:
      if ( *((_DWORD *)this + 227) == *((_DWORD *)this + 596) )
        goto LABEL_13;
      return;
    case 0xA3:
      if ( ((_BYTE)this[64] & 1) != 0 )
        goto LABEL_13;
      if ( sub_10022810(this) )
      {
        v9 = *(void (__thiscall **)(float *, int *))(*(_DWORD *)v2 + 1264);
        v13 = 0.0;
        v12 = 139;
        v9(v2, &v12);
        if ( sub_10020E90(v2) )
        {
          sub_10247EC0(v11);
          *(float *)&v11[13] = (float)*((int *)v2 + 55);
          sub_10023330(v11, (int)v2);
          sub_10023300(v11, (int)v2);
          v11[16] = 0;
          sub_100D9E70((int *)v2, (int)v2, v11);
        }
      }
      break;
    default:
LABEL_18:
      sub_103955D0(a2);
      return;
  }
}
