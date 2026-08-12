int sub_10149570()
{
  int v0; // ebx
  int v1; // esi
  int v2; // eax
  int v4; // edi
  int v5; // edi
  int v6; // edi
  float v7; // [esp+10h] [ebp-1Ch]
  float v8; // [esp+10h] [ebp-1Ch]
  float v9; // [esp+10h] [ebp-1Ch]
  float v10[3]; // [esp+20h] [ebp-Ch] BYREF

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 8))(v0);
  v1 = 0;
  v2 = sub_100422D0();
  if ( v2 )
    v1 = v2 + 3356;
  if ( *(float *)(dword_10439DC4 + 44) > 0.0
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 60))(dword_1044CC48) )
  {
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(dword_1043C1A4 + 48) )
  {
    if ( !v1 || !*(_BYTE *)(v1 + 64) )
      goto LABEL_9;
LABEL_13:
    sub_101449C0(v1, v10);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v0 + 172))(v0, 1);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v0 + 196))(v0, v10);
    v4 = *(_DWORD *)v0;
    v7 = sub_10148980((float *)v1);
    (*(void (__thiscall **)(int, _DWORD))(v4 + 176))(v0, LODWORD(v7));
    v5 = *(_DWORD *)v0;
    v8 = sub_10148A20((float *)v1);
    (*(void (__thiscall **)(int, _DWORD))(v5 + 180))(v0, LODWORD(v8));
    v6 = *(_DWORD *)v0;
    v9 = sub_10142D00(v1);
    (*(void (__thiscall **)(int, _DWORD))(v6 + 664))(v0, LODWORD(v9));
    goto LABEL_10;
  }
  if ( *(_DWORD *)(dword_1043C2C4 + 48) )
    goto LABEL_13;
LABEL_9:
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 172))(v0, 0);
LABEL_10:
  (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 12))(v0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 4))(v0);
}
