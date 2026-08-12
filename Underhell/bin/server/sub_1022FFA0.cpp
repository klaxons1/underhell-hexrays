int __thiscall sub_1022FFA0(int this)
{
  int result; // eax
  int v3; // esi
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  const char *v7; // eax
  int v8; // esi
  int v9; // esi
  const char *v10; // eax
  int v11; // esi
  int v12; // esi
  const char *v13; // eax
  int v14; // esi
  const char *v15; // eax
  int v16; // esi
  double ArgList; // [esp+Ch] [ebp-210h]
  char *ArgList_4; // [esp+10h] [ebp-20Ch]
  char v19; // [esp+14h] [ebp-208h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(_DWORD *)(this + 880);
    if ( v4 != -1
      && (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1],
          v6 = v4 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v6)
      && *v5 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v6 )
        LOBYTE(v7) = (unsigned __int8)sub_100D6390((_DWORD *)*v5);
      else
        LOBYTE(v7) = (unsigned __int8)sub_100D6390(0);
    }
    else
    {
      v7 = "None";
    }
    sub_10429A00(Buffer, 0x200u, "Target: %s", (char)v7);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v8 = v3 + 1;
    switch ( *(_DWORD *)(this + 828) )
    {
      case 0:
        sub_10429A00(Buffer, 0x200u, "Moveto: Wait", v19);
        break;
      case 1:
        ArgList_4 = "Moveto: Walk to Mark";
        goto LABEL_16;
      case 2:
        sub_10429A00(Buffer, 0x200u, "Moveto: Run to Mark", v19);
        break;
      case 3:
        sub_10429A00(Buffer, 0x200u, "Moveto: Custom move to Mark", v19);
        break;
      case 4:
        ArgList_4 = "Moveto: Teleport to Mark";
LABEL_16:
        sub_10429A00(Buffer, 0x200u, ArgList_4, v19);
        break;
      case 5:
        sub_10429A00(Buffer, 0x200u, "Moveto: Wait Facing", v19);
        break;
      default:
        break;
    }
    sub_100D5DE0((_DWORD *)this, v8, (int)Buffer, 0.0, 255, 255, 255, 255);
    v9 = v8 + 1;
    v10 = "Yes";
    if ( !*(_BYTE *)(this + 888) )
      v10 = "No";
    sub_10429A00(Buffer, 0x200u, "Thinking: %s", (char)v10);
    sub_100D5DE0((_DWORD *)this, v9, (int)Buffer, 0.0, 255, 255, 255, 255);
    v11 = v9 + 1;
    if ( *(_DWORD *)(this + 260) )
    {
      sub_10429A00(Buffer, 0x200u, "Delay: %d", *(_DWORD *)(this + 848));
      sub_100D5DE0((_DWORD *)this, v11++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    ArgList = *(float *)(this + 856);
    sub_10429A00(Buffer, 0x200u, "Start Time: %f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v11, (int)Buffer, 0.0, 255, 255, 255, 255);
    v12 = v11 + 1;
    v13 = "Yes";
    if ( !*(_BYTE *)(this + 877) )
      v13 = "No";
    sub_10429A00(Buffer, 0x200u, "Sequence has started: %s", (char)v13);
    sub_100D5DE0((_DWORD *)this, v12, (int)Buffer, 0.0, 255, 255, 255, 255);
    v14 = v12 + 1;
    v15 = "No";
    if ( !*(_BYTE *)(this + 900) )
      v15 = "Yes";
    sub_10429A00(Buffer, 0x200u, "Cancel Other Sequences: %s", (char)v15);
    sub_100D5DE0((_DWORD *)this, v14, (int)Buffer, 0.0, 255, 255, 255, 255);
    v16 = v14 + 1;
    if ( *(_BYTE *)(this + 860) )
    {
      sub_10429A00(Buffer, 0x200u, "Is waiting for BeingSequence", v19);
      sub_100D5DE0((_DWORD *)this, v16++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    if ( *(_BYTE *)(this + 832) )
    {
      sub_10429A00(Buffer, 0x200u, "Is playing entry", v19);
      sub_100D5DE0((_DWORD *)this, v16++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    if ( *(_BYTE *)(this + 833) )
    {
      sub_10429A00(Buffer, 0x200u, "Will loop action sequence", v19);
      sub_100D5DE0((_DWORD *)this, v16++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    if ( *(_BYTE *)(this + 834) )
    {
      sub_10429A00(Buffer, 0x200u, "Will synch post idles", v19);
      sub_100D5DE0((_DWORD *)this, v16, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v16 + 1;
    }
    else
    {
      return v16;
    }
  }
  return result;
}
