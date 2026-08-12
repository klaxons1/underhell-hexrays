int __usercall sub_10346240@<eax>(int a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/combine_camera/combine_camera.mdl");
  sub_100E8220(a2, "sprites/glow1.vmt");
  sub_100E8220(a2, "sprites/light_glow03.vmt");
  dword_106E6678 = sub_100032E0((int)"ACT_COMBINE_CAMERA_OPEN");
  sub_10008F60((int)"ACT_COMBINE_CAMERA_OPEN", dword_106E6678);
  dword_106E6674 = sub_100032E0((int)"ACT_COMBINE_CAMERA_CLOSE");
  sub_10008F60((int)"ACT_COMBINE_CAMERA_CLOSE", dword_106E6674);
  dword_106E666C = sub_100032E0((int)"ACT_COMBINE_CAMERA_CLOSED_IDLE");
  sub_10008F60((int)"ACT_COMBINE_CAMERA_CLOSED_IDLE", dword_106E666C);
  dword_106E6670 = sub_100032E0((int)"ACT_COMBINE_CAMERA_OPEN_IDLE");
  sub_10008F60((int)"ACT_COMBINE_CAMERA_OPEN_IDLE", dword_106E6670);
  dword_106E6668 = sub_100032E0((int)"ACT_COMBINE_CAMERA_FIRE");
  sub_10008F60((int)"ACT_COMBINE_CAMERA_FIRE", dword_106E6668);
  sub_1023B8B0("NPC_CombineCamera.Move");
  sub_1023B8B0("NPC_CombineCamera.BecomeIdle");
  sub_1023B8B0("NPC_CombineCamera.Active");
  sub_1023B8B0("NPC_CombineCamera.Click");
  sub_1023B8B0("NPC_CombineCamera.Ping");
  sub_1023B8B0("NPC_CombineCamera.Angry");
  sub_1023B8B0("NPC_CombineCamera.Die");
  return sub_10021D80(a1);
}
